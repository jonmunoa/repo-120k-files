<template>
  <section class="panel-47093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47093");
const base = ref(47093);
const total = computed(() => base.value * 2);

function incrementar47093() {
  base.value++;
}
</script>
