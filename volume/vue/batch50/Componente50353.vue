<template>
  <section class="panel-50353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50353");
const base = ref(50353);
const total = computed(() => base.value * 2);

function incrementar50353() {
  base.value++;
}
</script>
