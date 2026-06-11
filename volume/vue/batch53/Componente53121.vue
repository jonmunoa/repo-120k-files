<template>
  <section class="panel-53121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53121");
const base = ref(53121);
const total = computed(() => base.value * 2);

function incrementar53121() {
  base.value++;
}
</script>
