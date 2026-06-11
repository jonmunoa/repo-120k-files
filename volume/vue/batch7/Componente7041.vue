<template>
  <section class="panel-7041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7041");
const base = ref(7041);
const total = computed(() => base.value * 2);

function incrementar7041() {
  base.value++;
}
</script>
