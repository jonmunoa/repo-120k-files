<template>
  <section class="panel-35041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35041");
const base = ref(35041);
const total = computed(() => base.value * 2);

function incrementar35041() {
  base.value++;
}
</script>
