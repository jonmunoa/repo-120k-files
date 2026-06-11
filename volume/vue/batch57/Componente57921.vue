<template>
  <section class="panel-57921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57921");
const base = ref(57921);
const total = computed(() => base.value * 2);

function incrementar57921() {
  base.value++;
}
</script>
