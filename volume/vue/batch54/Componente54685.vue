<template>
  <section class="panel-54685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54685");
const base = ref(54685);
const total = computed(() => base.value * 2);

function incrementar54685() {
  base.value++;
}
</script>
