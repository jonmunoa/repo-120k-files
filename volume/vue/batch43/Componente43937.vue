<template>
  <section class="panel-43937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43937");
const base = ref(43937);
const total = computed(() => base.value * 2);

function incrementar43937() {
  base.value++;
}
</script>
