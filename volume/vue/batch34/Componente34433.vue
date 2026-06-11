<template>
  <section class="panel-34433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34433");
const base = ref(34433);
const total = computed(() => base.value * 2);

function incrementar34433() {
  base.value++;
}
</script>
