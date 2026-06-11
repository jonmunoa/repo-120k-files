<template>
  <section class="panel-20921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20921");
const base = ref(20921);
const total = computed(() => base.value * 2);

function incrementar20921() {
  base.value++;
}
</script>
