<template>
  <section class="panel-48929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48929");
const base = ref(48929);
const total = computed(() => base.value * 2);

function incrementar48929() {
  base.value++;
}
</script>
