<template>
  <section class="panel-52569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52569");
const base = ref(52569);
const total = computed(() => base.value * 2);

function incrementar52569() {
  base.value++;
}
</script>
