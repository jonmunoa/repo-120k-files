<template>
  <section class="panel-18249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18249");
const base = ref(18249);
const total = computed(() => base.value * 2);

function incrementar18249() {
  base.value++;
}
</script>
