<template>
  <section class="panel-15785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15785");
const base = ref(15785);
const total = computed(() => base.value * 2);

function incrementar15785() {
  base.value++;
}
</script>
