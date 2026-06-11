<template>
  <section class="panel-45433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45433");
const base = ref(45433);
const total = computed(() => base.value * 2);

function incrementar45433() {
  base.value++;
}
</script>
