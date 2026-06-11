<template>
  <section class="panel-25041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25041");
const base = ref(25041);
const total = computed(() => base.value * 2);

function incrementar25041() {
  base.value++;
}
</script>
