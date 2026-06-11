<template>
  <section class="panel-43965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43965");
const base = ref(43965);
const total = computed(() => base.value * 2);

function incrementar43965() {
  base.value++;
}
</script>
