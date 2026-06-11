<template>
  <section class="panel-40077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40077");
const base = ref(40077);
const total = computed(() => base.value * 2);

function incrementar40077() {
  base.value++;
}
</script>
