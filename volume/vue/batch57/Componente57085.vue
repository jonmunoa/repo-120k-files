<template>
  <section class="panel-57085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57085");
const base = ref(57085);
const total = computed(() => base.value * 2);

function incrementar57085() {
  base.value++;
}
</script>
