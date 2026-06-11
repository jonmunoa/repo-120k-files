<template>
  <section class="panel-47433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47433");
const base = ref(47433);
const total = computed(() => base.value * 2);

function incrementar47433() {
  base.value++;
}
</script>
