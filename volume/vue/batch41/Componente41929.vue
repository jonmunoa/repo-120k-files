<template>
  <section class="panel-41929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41929");
const base = ref(41929);
const total = computed(() => base.value * 2);

function incrementar41929() {
  base.value++;
}
</script>
