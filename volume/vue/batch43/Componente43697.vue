<template>
  <section class="panel-43697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43697");
const base = ref(43697);
const total = computed(() => base.value * 2);

function incrementar43697() {
  base.value++;
}
</script>
