<template>
  <section class="panel-45529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45529");
const base = ref(45529);
const total = computed(() => base.value * 2);

function incrementar45529() {
  base.value++;
}
</script>
