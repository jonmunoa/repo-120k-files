<template>
  <section class="panel-42745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42745");
const base = ref(42745);
const total = computed(() => base.value * 2);

function incrementar42745() {
  base.value++;
}
</script>
