<template>
  <section class="panel-12193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12193");
const base = ref(12193);
const total = computed(() => base.value * 2);

function incrementar12193() {
  base.value++;
}
</script>
