<template>
  <section class="panel-32697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32697");
const base = ref(32697);
const total = computed(() => base.value * 2);

function incrementar32697() {
  base.value++;
}
</script>
