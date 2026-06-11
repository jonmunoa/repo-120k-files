<template>
  <section class="panel-16929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16929");
const base = ref(16929);
const total = computed(() => base.value * 2);

function incrementar16929() {
  base.value++;
}
</script>
