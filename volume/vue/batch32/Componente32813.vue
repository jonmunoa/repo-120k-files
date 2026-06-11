<template>
  <section class="panel-32813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32813");
const base = ref(32813);
const total = computed(() => base.value * 2);

function incrementar32813() {
  base.value++;
}
</script>
