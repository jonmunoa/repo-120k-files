<template>
  <section class="panel-24937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24937");
const base = ref(24937);
const total = computed(() => base.value * 2);

function incrementar24937() {
  base.value++;
}
</script>
