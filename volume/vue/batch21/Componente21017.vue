<template>
  <section class="panel-21017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21017");
const base = ref(21017);
const total = computed(() => base.value * 2);

function incrementar21017() {
  base.value++;
}
</script>
