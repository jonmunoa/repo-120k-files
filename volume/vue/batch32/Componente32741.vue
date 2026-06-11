<template>
  <section class="panel-32741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32741");
const base = ref(32741);
const total = computed(() => base.value * 2);

function incrementar32741() {
  base.value++;
}
</script>
