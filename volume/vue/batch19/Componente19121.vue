<template>
  <section class="panel-19121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19121");
const base = ref(19121);
const total = computed(() => base.value * 2);

function incrementar19121() {
  base.value++;
}
</script>
