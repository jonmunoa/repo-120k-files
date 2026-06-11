<template>
  <section class="panel-15697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15697");
const base = ref(15697);
const total = computed(() => base.value * 2);

function incrementar15697() {
  base.value++;
}
</script>
