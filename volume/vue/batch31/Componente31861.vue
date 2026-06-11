<template>
  <section class="panel-31861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31861");
const base = ref(31861);
const total = computed(() => base.value * 2);

function incrementar31861() {
  base.value++;
}
</script>
