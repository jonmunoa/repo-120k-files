<template>
  <section class="panel-50465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50465");
const base = ref(50465);
const total = computed(() => base.value * 2);

function incrementar50465() {
  base.value++;
}
</script>
