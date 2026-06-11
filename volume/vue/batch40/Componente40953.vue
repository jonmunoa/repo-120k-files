<template>
  <section class="panel-40953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40953");
const base = ref(40953);
const total = computed(() => base.value * 2);

function incrementar40953() {
  base.value++;
}
</script>
