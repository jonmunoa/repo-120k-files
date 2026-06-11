<template>
  <section class="panel-35921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35921");
const base = ref(35921);
const total = computed(() => base.value * 2);

function incrementar35921() {
  base.value++;
}
</script>
