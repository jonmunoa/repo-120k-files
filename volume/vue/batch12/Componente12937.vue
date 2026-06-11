<template>
  <section class="panel-12937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12937");
const base = ref(12937);
const total = computed(() => base.value * 2);

function incrementar12937() {
  base.value++;
}
</script>
