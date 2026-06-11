<template>
  <section class="panel-12929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12929");
const base = ref(12929);
const total = computed(() => base.value * 2);

function incrementar12929() {
  base.value++;
}
</script>
