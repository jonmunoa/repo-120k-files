<template>
  <section class="panel-2781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2781");
const base = ref(2781);
const total = computed(() => base.value * 2);

function incrementar2781() {
  base.value++;
}
</script>
