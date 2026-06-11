<template>
  <section class="panel-9769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9769");
const base = ref(9769);
const total = computed(() => base.value * 2);

function incrementar9769() {
  base.value++;
}
</script>
