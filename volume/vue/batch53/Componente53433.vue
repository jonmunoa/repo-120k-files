<template>
  <section class="panel-53433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53433");
const base = ref(53433);
const total = computed(() => base.value * 2);

function incrementar53433() {
  base.value++;
}
</script>
