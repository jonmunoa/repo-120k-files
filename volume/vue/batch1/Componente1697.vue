<template>
  <section class="panel-1697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1697");
const base = ref(1697);
const total = computed(() => base.value * 2);

function incrementar1697() {
  base.value++;
}
</script>
