<template>
  <section class="panel-27433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27433");
const base = ref(27433);
const total = computed(() => base.value * 2);

function incrementar27433() {
  base.value++;
}
</script>
