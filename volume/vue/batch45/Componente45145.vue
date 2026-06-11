<template>
  <section class="panel-45145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45145");
const base = ref(45145);
const total = computed(() => base.value * 2);

function incrementar45145() {
  base.value++;
}
</script>
