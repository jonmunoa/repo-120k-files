<template>
  <section class="panel-29969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29969");
const base = ref(29969);
const total = computed(() => base.value * 2);

function incrementar29969() {
  base.value++;
}
</script>
