<template>
  <section class="panel-50533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50533");
const base = ref(50533);
const total = computed(() => base.value * 2);

function incrementar50533() {
  base.value++;
}
</script>
