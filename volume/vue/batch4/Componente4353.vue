<template>
  <section class="panel-4353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4353");
const base = ref(4353);
const total = computed(() => base.value * 2);

function incrementar4353() {
  base.value++;
}
</script>
