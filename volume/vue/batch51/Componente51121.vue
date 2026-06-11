<template>
  <section class="panel-51121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51121");
const base = ref(51121);
const total = computed(() => base.value * 2);

function incrementar51121() {
  base.value++;
}
</script>
