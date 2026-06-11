<template>
  <section class="panel-21205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21205");
const base = ref(21205);
const total = computed(() => base.value * 2);

function incrementar21205() {
  base.value++;
}
</script>
