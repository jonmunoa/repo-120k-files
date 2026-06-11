<template>
  <section class="panel-5929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5929");
const base = ref(5929);
const total = computed(() => base.value * 2);

function incrementar5929() {
  base.value++;
}
</script>
