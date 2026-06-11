<template>
  <section class="panel-51785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51785");
const base = ref(51785);
const total = computed(() => base.value * 2);

function incrementar51785() {
  base.value++;
}
</script>
