<template>
  <section class="panel-2629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2629");
const base = ref(2629);
const total = computed(() => base.value * 2);

function incrementar2629() {
  base.value++;
}
</script>
