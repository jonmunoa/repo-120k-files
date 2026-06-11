<template>
  <section class="panel-54365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54365");
const base = ref(54365);
const total = computed(() => base.value * 2);

function incrementar54365() {
  base.value++;
}
</script>
