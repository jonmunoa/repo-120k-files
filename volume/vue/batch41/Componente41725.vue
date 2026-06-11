<template>
  <section class="panel-41725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41725");
const base = ref(41725);
const total = computed(() => base.value * 2);

function incrementar41725() {
  base.value++;
}
</script>
