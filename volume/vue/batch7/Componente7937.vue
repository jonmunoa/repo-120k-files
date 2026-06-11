<template>
  <section class="panel-7937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7937");
const base = ref(7937);
const total = computed(() => base.value * 2);

function incrementar7937() {
  base.value++;
}
</script>
