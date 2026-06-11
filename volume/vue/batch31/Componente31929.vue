<template>
  <section class="panel-31929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31929");
const base = ref(31929);
const total = computed(() => base.value * 2);

function incrementar31929() {
  base.value++;
}
</script>
