<template>
  <section class="panel-7929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7929");
const base = ref(7929);
const total = computed(() => base.value * 2);

function incrementar7929() {
  base.value++;
}
</script>
