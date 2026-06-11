<template>
  <section class="panel-10981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10981");
const base = ref(10981);
const total = computed(() => base.value * 2);

function incrementar10981() {
  base.value++;
}
</script>
