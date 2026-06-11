<template>
  <section class="panel-51077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51077");
const base = ref(51077);
const total = computed(() => base.value * 2);

function incrementar51077() {
  base.value++;
}
</script>
