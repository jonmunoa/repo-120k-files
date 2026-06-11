<template>
  <section class="panel-27781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27781");
const base = ref(27781);
const total = computed(() => base.value * 2);

function incrementar27781() {
  base.value++;
}
</script>
