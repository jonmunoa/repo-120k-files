<template>
  <section class="panel-23861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23861");
const base = ref(23861);
const total = computed(() => base.value * 2);

function incrementar23861() {
  base.value++;
}
</script>
