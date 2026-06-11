<template>
  <section class="panel-32929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32929");
const base = ref(32929);
const total = computed(() => base.value * 2);

function incrementar32929() {
  base.value++;
}
</script>
