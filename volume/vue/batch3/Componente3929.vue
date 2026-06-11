<template>
  <section class="panel-3929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3929");
const base = ref(3929);
const total = computed(() => base.value * 2);

function incrementar3929() {
  base.value++;
}
</script>
