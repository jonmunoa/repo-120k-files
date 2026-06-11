<template>
  <section class="panel-15925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15925");
const base = ref(15925);
const total = computed(() => base.value * 2);

function incrementar15925() {
  base.value++;
}
</script>
