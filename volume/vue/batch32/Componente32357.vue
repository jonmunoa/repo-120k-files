<template>
  <section class="panel-32357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32357");
const base = ref(32357);
const total = computed(() => base.value * 2);

function incrementar32357() {
  base.value++;
}
</script>
