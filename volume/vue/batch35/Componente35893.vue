<template>
  <section class="panel-35893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35893");
const base = ref(35893);
const total = computed(() => base.value * 2);

function incrementar35893() {
  base.value++;
}
</script>
