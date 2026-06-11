<template>
  <section class="panel-2105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2105");
const base = ref(2105);
const total = computed(() => base.value * 2);

function incrementar2105() {
  base.value++;
}
</script>
