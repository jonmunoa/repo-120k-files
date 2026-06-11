<template>
  <section class="panel-5365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5365");
const base = ref(5365);
const total = computed(() => base.value * 2);

function incrementar5365() {
  base.value++;
}
</script>
