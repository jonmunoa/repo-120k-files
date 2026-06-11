<template>
  <section class="panel-45937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45937");
const base = ref(45937);
const total = computed(() => base.value * 2);

function incrementar45937() {
  base.value++;
}
</script>
