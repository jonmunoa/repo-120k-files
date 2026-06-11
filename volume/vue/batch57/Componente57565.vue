<template>
  <section class="panel-57565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57565");
const base = ref(57565);
const total = computed(() => base.value * 2);

function incrementar57565() {
  base.value++;
}
</script>
