<template>
  <section class="panel-6661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6661");
const base = ref(6661);
const total = computed(() => base.value * 2);

function incrementar6661() {
  base.value++;
}
</script>
