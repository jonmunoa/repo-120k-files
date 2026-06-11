<template>
  <section class="panel-15929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15929");
const base = ref(15929);
const total = computed(() => base.value * 2);

function incrementar15929() {
  base.value++;
}
</script>
