<template>
  <section class="panel-34365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34365");
const base = ref(34365);
const total = computed(() => base.value * 2);

function incrementar34365() {
  base.value++;
}
</script>
