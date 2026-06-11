<template>
  <section class="panel-8069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8069");
const base = ref(8069);
const total = computed(() => base.value * 2);

function incrementar8069() {
  base.value++;
}
</script>
