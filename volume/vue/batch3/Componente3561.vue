<template>
  <section class="panel-3561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3561");
const base = ref(3561);
const total = computed(() => base.value * 2);

function incrementar3561() {
  base.value++;
}
</script>
