<template>
  <section class="panel-44937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44937");
const base = ref(44937);
const total = computed(() => base.value * 2);

function incrementar44937() {
  base.value++;
}
</script>
