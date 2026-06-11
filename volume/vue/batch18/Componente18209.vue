<template>
  <section class="panel-18209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18209");
const base = ref(18209);
const total = computed(() => base.value * 2);

function incrementar18209() {
  base.value++;
}
</script>
