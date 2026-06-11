<template>
  <section class="panel-15937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15937");
const base = ref(15937);
const total = computed(() => base.value * 2);

function incrementar15937() {
  base.value++;
}
</script>
