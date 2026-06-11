<template>
  <section class="panel-3621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3621");
const base = ref(3621);
const total = computed(() => base.value * 2);

function incrementar3621() {
  base.value++;
}
</script>
