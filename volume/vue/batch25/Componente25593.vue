<template>
  <section class="panel-25593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25593");
const base = ref(25593);
const total = computed(() => base.value * 2);

function incrementar25593() {
  base.value++;
}
</script>
