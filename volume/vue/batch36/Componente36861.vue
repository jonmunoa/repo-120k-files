<template>
  <section class="panel-36861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36861");
const base = ref(36861);
const total = computed(() => base.value * 2);

function incrementar36861() {
  base.value++;
}
</script>
