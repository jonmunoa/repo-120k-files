<template>
  <section class="panel-47949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47949");
const base = ref(47949);
const total = computed(() => base.value * 2);

function incrementar47949() {
  base.value++;
}
</script>
