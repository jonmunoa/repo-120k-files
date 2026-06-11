<template>
  <section class="panel-50737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50737");
const base = ref(50737);
const total = computed(() => base.value * 2);

function incrementar50737() {
  base.value++;
}
</script>
