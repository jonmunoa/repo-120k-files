<template>
  <section class="panel-24121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24121");
const base = ref(24121);
const total = computed(() => base.value * 2);

function incrementar24121() {
  base.value++;
}
</script>
