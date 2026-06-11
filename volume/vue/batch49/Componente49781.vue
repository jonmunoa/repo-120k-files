<template>
  <section class="panel-49781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49781");
const base = ref(49781);
const total = computed(() => base.value * 2);

function incrementar49781() {
  base.value++;
}
</script>
