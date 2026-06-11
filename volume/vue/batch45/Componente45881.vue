<template>
  <section class="panel-45881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45881");
const base = ref(45881);
const total = computed(() => base.value * 2);

function incrementar45881() {
  base.value++;
}
</script>
