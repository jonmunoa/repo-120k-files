<template>
  <section class="panel-45121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45121");
const base = ref(45121);
const total = computed(() => base.value * 2);

function incrementar45121() {
  base.value++;
}
</script>
