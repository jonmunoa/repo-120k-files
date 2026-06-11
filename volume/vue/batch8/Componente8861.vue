<template>
  <section class="panel-8861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8861");
const base = ref(8861);
const total = computed(() => base.value * 2);

function incrementar8861() {
  base.value++;
}
</script>
