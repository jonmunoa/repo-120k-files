<template>
  <section class="panel-11517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11517");
const base = ref(11517);
const total = computed(() => base.value * 2);

function incrementar11517() {
  base.value++;
}
</script>
