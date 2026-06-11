<template>
  <section class="panel-56861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56861");
const base = ref(56861);
const total = computed(() => base.value * 2);

function incrementar56861() {
  base.value++;
}
</script>
