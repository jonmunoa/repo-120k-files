<template>
  <section class="panel-47077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47077");
const base = ref(47077);
const total = computed(() => base.value * 2);

function incrementar47077() {
  base.value++;
}
</script>
