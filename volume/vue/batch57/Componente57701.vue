<template>
  <section class="panel-57701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57701");
const base = ref(57701);
const total = computed(() => base.value * 2);

function incrementar57701() {
  base.value++;
}
</script>
