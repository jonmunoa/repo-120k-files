<template>
  <section class="panel-14361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14361");
const base = ref(14361);
const total = computed(() => base.value * 2);

function incrementar14361() {
  base.value++;
}
</script>
