<template>
  <section class="panel-35077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35077");
const base = ref(35077);
const total = computed(() => base.value * 2);

function incrementar35077() {
  base.value++;
}
</script>
