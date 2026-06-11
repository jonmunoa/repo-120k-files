<template>
  <section class="panel-15413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15413");
const base = ref(15413);
const total = computed(() => base.value * 2);

function incrementar15413() {
  base.value++;
}
</script>
