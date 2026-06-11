<template>
  <section class="panel-9581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9581");
const base = ref(9581);
const total = computed(() => base.value * 2);

function incrementar9581() {
  base.value++;
}
</script>
