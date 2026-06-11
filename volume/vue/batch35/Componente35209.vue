<template>
  <section class="panel-35209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35209");
const base = ref(35209);
const total = computed(() => base.value * 2);

function incrementar35209() {
  base.value++;
}
</script>
