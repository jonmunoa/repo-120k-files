<template>
  <section class="panel-11697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11697");
const base = ref(11697);
const total = computed(() => base.value * 2);

function incrementar11697() {
  base.value++;
}
</script>
