<template>
  <section class="panel-48465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48465");
const base = ref(48465);
const total = computed(() => base.value * 2);

function incrementar48465() {
  base.value++;
}
</script>
