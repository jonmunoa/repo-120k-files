<template>
  <section class="panel-45161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45161");
const base = ref(45161);
const total = computed(() => base.value * 2);

function incrementar45161() {
  base.value++;
}
</script>
