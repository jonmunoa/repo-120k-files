<template>
  <section class="panel-55689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55689");
const base = ref(55689);
const total = computed(() => base.value * 2);

function incrementar55689() {
  base.value++;
}
</script>
