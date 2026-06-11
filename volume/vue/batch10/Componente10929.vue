<template>
  <section class="panel-10929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10929");
const base = ref(10929);
const total = computed(() => base.value * 2);

function incrementar10929() {
  base.value++;
}
</script>
