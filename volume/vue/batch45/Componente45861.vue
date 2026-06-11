<template>
  <section class="panel-45861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45861");
const base = ref(45861);
const total = computed(() => base.value * 2);

function incrementar45861() {
  base.value++;
}
</script>
