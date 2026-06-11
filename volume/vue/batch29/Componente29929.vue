<template>
  <section class="panel-29929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29929");
const base = ref(29929);
const total = computed(() => base.value * 2);

function incrementar29929() {
  base.value++;
}
</script>
