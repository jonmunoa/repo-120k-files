<template>
  <section class="panel-18077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18077");
const base = ref(18077);
const total = computed(() => base.value * 2);

function incrementar18077() {
  base.value++;
}
</script>
