<template>
  <section class="panel-3281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3281");
const base = ref(3281);
const total = computed(() => base.value * 2);

function incrementar3281() {
  base.value++;
}
</script>
