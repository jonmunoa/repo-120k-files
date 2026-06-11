<template>
  <section class="panel-47593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47593");
const base = ref(47593);
const total = computed(() => base.value * 2);

function incrementar47593() {
  base.value++;
}
</script>
