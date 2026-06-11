<template>
  <section class="panel-29925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29925");
const base = ref(29925);
const total = computed(() => base.value * 2);

function incrementar29925() {
  base.value++;
}
</script>
