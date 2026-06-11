<template>
  <section class="panel-31517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31517");
const base = ref(31517);
const total = computed(() => base.value * 2);

function incrementar31517() {
  base.value++;
}
</script>
