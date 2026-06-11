<template>
  <section class="panel-33773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33773");
const base = ref(33773);
const total = computed(() => base.value * 2);

function incrementar33773() {
  base.value++;
}
</script>
