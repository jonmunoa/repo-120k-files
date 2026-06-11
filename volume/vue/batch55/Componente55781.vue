<template>
  <section class="panel-55781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55781");
const base = ref(55781);
const total = computed(() => base.value * 2);

function incrementar55781() {
  base.value++;
}
</script>
