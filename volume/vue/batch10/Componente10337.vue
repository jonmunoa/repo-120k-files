<template>
  <section class="panel-10337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10337");
const base = ref(10337);
const total = computed(() => base.value * 2);

function incrementar10337() {
  base.value++;
}
</script>
