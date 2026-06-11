<template>
  <section class="panel-929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 929");
const base = ref(929);
const total = computed(() => base.value * 2);

function incrementar929() {
  base.value++;
}
</script>
