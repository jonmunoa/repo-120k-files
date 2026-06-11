<template>
  <section class="panel-43769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43769");
const base = ref(43769);
const total = computed(() => base.value * 2);

function incrementar43769() {
  base.value++;
}
</script>
