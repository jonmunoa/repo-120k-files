<template>
  <section class="panel-41949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41949");
const base = ref(41949);
const total = computed(() => base.value * 2);

function incrementar41949() {
  base.value++;
}
</script>
