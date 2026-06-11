<template>
  <section class="panel-37465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37465");
const base = ref(37465);
const total = computed(() => base.value * 2);

function incrementar37465() {
  base.value++;
}
</script>
