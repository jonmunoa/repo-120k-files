<template>
  <section class="panel-54121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54121");
const base = ref(54121);
const total = computed(() => base.value * 2);

function incrementar54121() {
  base.value++;
}
</script>
