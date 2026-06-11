<template>
  <section class="panel-32445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32445");
const base = ref(32445);
const total = computed(() => base.value * 2);

function incrementar32445() {
  base.value++;
}
</script>
