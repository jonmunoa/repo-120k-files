<template>
  <section class="panel-33629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33629");
const base = ref(33629);
const total = computed(() => base.value * 2);

function incrementar33629() {
  base.value++;
}
</script>
