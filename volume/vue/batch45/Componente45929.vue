<template>
  <section class="panel-45929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45929");
const base = ref(45929);
const total = computed(() => base.value * 2);

function incrementar45929() {
  base.value++;
}
</script>
