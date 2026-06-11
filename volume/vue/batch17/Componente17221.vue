<template>
  <section class="panel-17221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17221");
const base = ref(17221);
const total = computed(() => base.value * 2);

function incrementar17221() {
  base.value++;
}
</script>
