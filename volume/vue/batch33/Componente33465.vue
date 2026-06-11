<template>
  <section class="panel-33465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33465");
const base = ref(33465);
const total = computed(() => base.value * 2);

function incrementar33465() {
  base.value++;
}
</script>
