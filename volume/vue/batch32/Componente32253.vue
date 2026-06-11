<template>
  <section class="panel-32253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32253");
const base = ref(32253);
const total = computed(() => base.value * 2);

function incrementar32253() {
  base.value++;
}
</script>
