<template>
  <section class="panel-3577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3577");
const base = ref(3577);
const total = computed(() => base.value * 2);

function incrementar3577() {
  base.value++;
}
</script>
