<template>
  <section class="panel-3225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3225");
const base = ref(3225);
const total = computed(() => base.value * 2);

function incrementar3225() {
  base.value++;
}
</script>
