<template>
  <section class="panel-55321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55321");
const base = ref(55321);
const total = computed(() => base.value * 2);

function incrementar55321() {
  base.value++;
}
</script>
