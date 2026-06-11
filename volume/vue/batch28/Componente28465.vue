<template>
  <section class="panel-28465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28465");
const base = ref(28465);
const total = computed(() => base.value * 2);

function incrementar28465() {
  base.value++;
}
</script>
