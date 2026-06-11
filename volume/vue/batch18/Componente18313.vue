<template>
  <section class="panel-18313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18313");
const base = ref(18313);
const total = computed(() => base.value * 2);

function incrementar18313() {
  base.value++;
}
</script>
