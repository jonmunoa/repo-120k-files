<template>
  <section class="panel-21041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21041");
const base = ref(21041);
const total = computed(() => base.value * 2);

function incrementar21041() {
  base.value++;
}
</script>
