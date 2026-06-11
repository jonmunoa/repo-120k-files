<template>
  <section class="panel-45673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45673");
const base = ref(45673);
const total = computed(() => base.value * 2);

function incrementar45673() {
  base.value++;
}
</script>
