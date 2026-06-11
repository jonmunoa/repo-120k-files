<template>
  <section class="panel-20569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20569");
const base = ref(20569);
const total = computed(() => base.value * 2);

function incrementar20569() {
  base.value++;
}
</script>
