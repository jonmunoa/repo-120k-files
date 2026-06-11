<template>
  <section class="panel-30445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30445");
const base = ref(30445);
const total = computed(() => base.value * 2);

function incrementar30445() {
  base.value++;
}
</script>
