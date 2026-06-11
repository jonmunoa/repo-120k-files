<template>
  <section class="panel-36929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36929");
const base = ref(36929);
const total = computed(() => base.value * 2);

function incrementar36929() {
  base.value++;
}
</script>
