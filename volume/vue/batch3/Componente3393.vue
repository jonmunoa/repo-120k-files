<template>
  <section class="panel-3393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3393");
const base = ref(3393);
const total = computed(() => base.value * 2);

function incrementar3393() {
  base.value++;
}
</script>
