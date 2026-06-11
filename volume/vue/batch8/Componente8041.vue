<template>
  <section class="panel-8041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8041");
const base = ref(8041);
const total = computed(() => base.value * 2);

function incrementar8041() {
  base.value++;
}
</script>
