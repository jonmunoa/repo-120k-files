<template>
  <section class="panel-52337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52337");
const base = ref(52337);
const total = computed(() => base.value * 2);

function incrementar52337() {
  base.value++;
}
</script>
