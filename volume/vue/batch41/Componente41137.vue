<template>
  <section class="panel-41137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41137");
const base = ref(41137);
const total = computed(() => base.value * 2);

function incrementar41137() {
  base.value++;
}
</script>
