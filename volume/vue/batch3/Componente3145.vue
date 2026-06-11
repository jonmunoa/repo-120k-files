<template>
  <section class="panel-3145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3145");
const base = ref(3145);
const total = computed(() => base.value * 2);

function incrementar3145() {
  base.value++;
}
</script>
