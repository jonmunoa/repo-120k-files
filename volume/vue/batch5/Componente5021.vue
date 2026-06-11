<template>
  <section class="panel-5021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5021");
const base = ref(5021);
const total = computed(() => base.value * 2);

function incrementar5021() {
  base.value++;
}
</script>
