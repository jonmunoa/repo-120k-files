<template>
  <section class="panel-32021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32021");
const base = ref(32021);
const total = computed(() => base.value * 2);

function incrementar32021() {
  base.value++;
}
</script>
