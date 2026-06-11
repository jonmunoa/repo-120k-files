<template>
  <section class="panel-51781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51781");
const base = ref(51781);
const total = computed(() => base.value * 2);

function incrementar51781() {
  base.value++;
}
</script>
