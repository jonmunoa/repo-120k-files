<template>
  <section class="panel-31937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31937");
const base = ref(31937);
const total = computed(() => base.value * 2);

function incrementar31937() {
  base.value++;
}
</script>
