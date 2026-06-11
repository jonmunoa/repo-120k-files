<template>
  <section class="panel-30645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30645");
const base = ref(30645);
const total = computed(() => base.value * 2);

function incrementar30645() {
  base.value++;
}
</script>
