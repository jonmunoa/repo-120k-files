<template>
  <section class="panel-42785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42785");
const base = ref(42785);
const total = computed(() => base.value * 2);

function incrementar42785() {
  base.value++;
}
</script>
