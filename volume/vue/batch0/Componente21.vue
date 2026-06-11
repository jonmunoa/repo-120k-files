<template>
  <section class="panel-21">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21");
const base = ref(21);
const total = computed(() => base.value * 2);

function incrementar21() {
  base.value++;
}
</script>
