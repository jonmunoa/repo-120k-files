<template>
  <section class="panel-45017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45017");
const base = ref(45017);
const total = computed(() => base.value * 2);

function incrementar45017() {
  base.value++;
}
</script>
