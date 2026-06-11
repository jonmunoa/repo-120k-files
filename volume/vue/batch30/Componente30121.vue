<template>
  <section class="panel-30121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30121");
const base = ref(30121);
const total = computed(() => base.value * 2);

function incrementar30121() {
  base.value++;
}
</script>
