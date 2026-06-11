<template>
  <section class="panel-23433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23433");
const base = ref(23433);
const total = computed(() => base.value * 2);

function incrementar23433() {
  base.value++;
}
</script>
