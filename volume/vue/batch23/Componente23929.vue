<template>
  <section class="panel-23929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23929");
const base = ref(23929);
const total = computed(() => base.value * 2);

function incrementar23929() {
  base.value++;
}
</script>
