<template>
  <section class="panel-9929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9929");
const base = ref(9929);
const total = computed(() => base.value * 2);

function incrementar9929() {
  base.value++;
}
</script>
