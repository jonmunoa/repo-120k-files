<template>
  <section class="panel-24881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24881");
const base = ref(24881);
const total = computed(() => base.value * 2);

function incrementar24881() {
  base.value++;
}
</script>
