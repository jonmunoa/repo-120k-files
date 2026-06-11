<template>
  <section class="panel-16621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16621");
const base = ref(16621);
const total = computed(() => base.value * 2);

function incrementar16621() {
  base.value++;
}
</script>
