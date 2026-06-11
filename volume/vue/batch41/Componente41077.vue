<template>
  <section class="panel-41077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41077");
const base = ref(41077);
const total = computed(() => base.value * 2);

function incrementar41077() {
  base.value++;
}
</script>
