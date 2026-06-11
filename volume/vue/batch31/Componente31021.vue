<template>
  <section class="panel-31021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31021");
const base = ref(31021);
const total = computed(() => base.value * 2);

function incrementar31021() {
  base.value++;
}
</script>
