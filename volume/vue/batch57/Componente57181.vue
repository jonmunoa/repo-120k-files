<template>
  <section class="panel-57181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57181");
const base = ref(57181);
const total = computed(() => base.value * 2);

function incrementar57181() {
  base.value++;
}
</script>
