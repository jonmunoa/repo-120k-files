<template>
  <section class="panel-12781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12781");
const base = ref(12781);
const total = computed(() => base.value * 2);

function incrementar12781() {
  base.value++;
}
</script>
