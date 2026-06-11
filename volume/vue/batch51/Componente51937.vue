<template>
  <section class="panel-51937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51937");
const base = ref(51937);
const total = computed(() => base.value * 2);

function incrementar51937() {
  base.value++;
}
</script>
