<template>
  <section class="panel-54865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54865");
const base = ref(54865);
const total = computed(() => base.value * 2);

function incrementar54865() {
  base.value++;
}
</script>
