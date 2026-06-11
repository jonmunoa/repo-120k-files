<template>
  <section class="panel-40041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40041");
const base = ref(40041);
const total = computed(() => base.value * 2);

function incrementar40041() {
  base.value++;
}
</script>
