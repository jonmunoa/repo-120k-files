<template>
  <section class="panel-11781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11781");
const base = ref(11781);
const total = computed(() => base.value * 2);

function incrementar11781() {
  base.value++;
}
</script>
