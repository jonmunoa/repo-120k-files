<template>
  <section class="panel-15969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15969");
const base = ref(15969);
const total = computed(() => base.value * 2);

function incrementar15969() {
  base.value++;
}
</script>
