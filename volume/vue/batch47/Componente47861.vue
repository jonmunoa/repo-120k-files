<template>
  <section class="panel-47861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47861");
const base = ref(47861);
const total = computed(() => base.value * 2);

function incrementar47861() {
  base.value++;
}
</script>
