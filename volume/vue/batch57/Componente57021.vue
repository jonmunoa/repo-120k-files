<template>
  <section class="panel-57021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57021");
const base = ref(57021);
const total = computed(() => base.value * 2);

function incrementar57021() {
  base.value++;
}
</script>
