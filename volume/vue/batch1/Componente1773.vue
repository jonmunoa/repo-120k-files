<template>
  <section class="panel-1773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1773");
const base = ref(1773);
const total = computed(() => base.value * 2);

function incrementar1773() {
  base.value++;
}
</script>
