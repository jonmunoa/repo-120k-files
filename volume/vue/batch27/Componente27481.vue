<template>
  <section class="panel-27481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27481");
const base = ref(27481);
const total = computed(() => base.value * 2);

function incrementar27481() {
  base.value++;
}
</script>
