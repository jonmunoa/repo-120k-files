<template>
  <section class="panel-35729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35729");
const base = ref(35729);
const total = computed(() => base.value * 2);

function incrementar35729() {
  base.value++;
}
</script>
