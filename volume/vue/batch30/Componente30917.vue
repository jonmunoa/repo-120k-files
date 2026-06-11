<template>
  <section class="panel-30917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30917");
const base = ref(30917);
const total = computed(() => base.value * 2);

function incrementar30917() {
  base.value++;
}
</script>
