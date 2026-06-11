<template>
  <section class="panel-45697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45697");
const base = ref(45697);
const total = computed(() => base.value * 2);

function incrementar45697() {
  base.value++;
}
</script>
