<template>
  <section class="panel-15865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15865");
const base = ref(15865);
const total = computed(() => base.value * 2);

function incrementar15865() {
  base.value++;
}
</script>
