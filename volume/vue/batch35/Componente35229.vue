<template>
  <section class="panel-35229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35229");
const base = ref(35229);
const total = computed(() => base.value * 2);

function incrementar35229() {
  base.value++;
}
</script>
