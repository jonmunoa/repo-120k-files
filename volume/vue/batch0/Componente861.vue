<template>
  <section class="panel-861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 861");
const base = ref(861);
const total = computed(() => base.value * 2);

function incrementar861() {
  base.value++;
}
</script>
