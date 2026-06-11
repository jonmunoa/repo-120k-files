<template>
  <section class="panel-4445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4445");
const base = ref(4445);
const total = computed(() => base.value * 2);

function incrementar4445() {
  base.value++;
}
</script>
