<template>
  <section class="panel-38117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38117");
const base = ref(38117);
const total = computed(() => base.value * 2);

function incrementar38117() {
  base.value++;
}
</script>
