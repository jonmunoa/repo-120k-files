<template>
  <section class="panel-54205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54205");
const base = ref(54205);
const total = computed(() => base.value * 2);

function incrementar54205() {
  base.value++;
}
</script>
