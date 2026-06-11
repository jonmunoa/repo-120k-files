<template>
  <section class="panel-31017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31017");
const base = ref(31017);
const total = computed(() => base.value * 2);

function incrementar31017() {
  base.value++;
}
</script>
