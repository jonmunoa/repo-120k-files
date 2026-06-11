<template>
  <section class="panel-29877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29877");
const base = ref(29877);
const total = computed(() => base.value * 2);

function incrementar29877() {
  base.value++;
}
</script>
