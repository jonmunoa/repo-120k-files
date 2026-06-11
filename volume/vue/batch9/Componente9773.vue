<template>
  <section class="panel-9773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9773");
const base = ref(9773);
const total = computed(() => base.value * 2);

function incrementar9773() {
  base.value++;
}
</script>
