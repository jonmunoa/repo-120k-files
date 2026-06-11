<template>
  <section class="panel-24685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24685");
const base = ref(24685);
const total = computed(() => base.value * 2);

function incrementar24685() {
  base.value++;
}
</script>
