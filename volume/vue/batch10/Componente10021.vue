<template>
  <section class="panel-10021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10021");
const base = ref(10021);
const total = computed(() => base.value * 2);

function incrementar10021() {
  base.value++;
}
</script>
