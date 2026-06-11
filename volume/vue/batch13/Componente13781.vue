<template>
  <section class="panel-13781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13781");
const base = ref(13781);
const total = computed(() => base.value * 2);

function incrementar13781() {
  base.value++;
}
</script>
