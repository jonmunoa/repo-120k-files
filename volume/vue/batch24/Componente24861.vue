<template>
  <section class="panel-24861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24861");
const base = ref(24861);
const total = computed(() => base.value * 2);

function incrementar24861() {
  base.value++;
}
</script>
