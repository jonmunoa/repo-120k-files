<template>
  <section class="panel-57093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57093");
const base = ref(57093);
const total = computed(() => base.value * 2);

function incrementar57093() {
  base.value++;
}
</script>
