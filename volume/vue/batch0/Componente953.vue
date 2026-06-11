<template>
  <section class="panel-953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 953");
const base = ref(953);
const total = computed(() => base.value * 2);

function incrementar953() {
  base.value++;
}
</script>
