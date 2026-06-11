<template>
  <section class="panel-35689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35689");
const base = ref(35689);
const total = computed(() => base.value * 2);

function incrementar35689() {
  base.value++;
}
</script>
