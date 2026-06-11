<template>
  <section class="panel-37345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37345");
const base = ref(37345);
const total = computed(() => base.value * 2);

function incrementar37345() {
  base.value++;
}
</script>
