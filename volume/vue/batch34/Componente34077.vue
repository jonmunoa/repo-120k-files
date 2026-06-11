<template>
  <section class="panel-34077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34077");
const base = ref(34077);
const total = computed(() => base.value * 2);

function incrementar34077() {
  base.value++;
}
</script>
