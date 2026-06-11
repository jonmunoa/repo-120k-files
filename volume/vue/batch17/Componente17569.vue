<template>
  <section class="panel-17569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17569");
const base = ref(17569);
const total = computed(() => base.value * 2);

function incrementar17569() {
  base.value++;
}
</script>
