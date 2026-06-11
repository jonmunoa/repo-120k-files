<template>
  <section class="panel-40021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40021");
const base = ref(40021);
const total = computed(() => base.value * 2);

function incrementar40021() {
  base.value++;
}
</script>
