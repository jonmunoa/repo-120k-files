<template>
  <section class="panel-41145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41145");
const base = ref(41145);
const total = computed(() => base.value * 2);

function incrementar41145() {
  base.value++;
}
</script>
