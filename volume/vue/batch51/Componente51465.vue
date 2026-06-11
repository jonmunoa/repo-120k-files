<template>
  <section class="panel-51465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51465");
const base = ref(51465);
const total = computed(() => base.value * 2);

function incrementar51465() {
  base.value++;
}
</script>
