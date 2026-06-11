<template>
  <section class="panel-41433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41433");
const base = ref(41433);
const total = computed(() => base.value * 2);

function incrementar41433() {
  base.value++;
}
</script>
