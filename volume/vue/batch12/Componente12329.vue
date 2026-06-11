<template>
  <section class="panel-12329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12329");
const base = ref(12329);
const total = computed(() => base.value * 2);

function incrementar12329() {
  base.value++;
}
</script>
