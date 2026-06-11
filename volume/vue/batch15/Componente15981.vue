<template>
  <section class="panel-15981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15981");
const base = ref(15981);
const total = computed(() => base.value * 2);

function incrementar15981() {
  base.value++;
}
</script>
