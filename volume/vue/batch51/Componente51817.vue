<template>
  <section class="panel-51817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51817");
const base = ref(51817);
const total = computed(() => base.value * 2);

function incrementar51817() {
  base.value++;
}
</script>
