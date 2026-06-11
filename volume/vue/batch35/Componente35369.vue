<template>
  <section class="panel-35369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35369");
const base = ref(35369);
const total = computed(() => base.value * 2);

function incrementar35369() {
  base.value++;
}
</script>
