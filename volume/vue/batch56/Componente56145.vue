<template>
  <section class="panel-56145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56145");
const base = ref(56145);
const total = computed(() => base.value * 2);

function incrementar56145() {
  base.value++;
}
</script>
