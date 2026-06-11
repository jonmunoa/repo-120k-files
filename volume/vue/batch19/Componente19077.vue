<template>
  <section class="panel-19077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19077");
const base = ref(19077);
const total = computed(() => base.value * 2);

function incrementar19077() {
  base.value++;
}
</script>
