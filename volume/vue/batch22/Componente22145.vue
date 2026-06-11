<template>
  <section class="panel-22145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22145");
const base = ref(22145);
const total = computed(() => base.value * 2);

function incrementar22145() {
  base.value++;
}
</script>
