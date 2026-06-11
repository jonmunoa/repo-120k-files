<template>
  <section class="panel-50357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50357");
const base = ref(50357);
const total = computed(() => base.value * 2);

function incrementar50357() {
  base.value++;
}
</script>
