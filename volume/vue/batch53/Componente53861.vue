<template>
  <section class="panel-53861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53861");
const base = ref(53861);
const total = computed(() => base.value * 2);

function incrementar53861() {
  base.value++;
}
</script>
