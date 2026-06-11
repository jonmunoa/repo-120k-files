<template>
  <section class="panel-3629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3629");
const base = ref(3629);
const total = computed(() => base.value * 2);

function incrementar3629() {
  base.value++;
}
</script>
