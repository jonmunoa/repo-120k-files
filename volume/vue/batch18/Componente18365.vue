<template>
  <section class="panel-18365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18365");
const base = ref(18365);
const total = computed(() => base.value * 2);

function incrementar18365() {
  base.value++;
}
</script>
