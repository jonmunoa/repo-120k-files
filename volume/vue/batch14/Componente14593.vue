<template>
  <section class="panel-14593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14593");
const base = ref(14593);
const total = computed(() => base.value * 2);

function incrementar14593() {
  base.value++;
}
</script>
