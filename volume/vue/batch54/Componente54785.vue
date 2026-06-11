<template>
  <section class="panel-54785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54785");
const base = ref(54785);
const total = computed(() => base.value * 2);

function incrementar54785() {
  base.value++;
}
</script>
