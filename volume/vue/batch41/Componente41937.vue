<template>
  <section class="panel-41937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41937");
const base = ref(41937);
const total = computed(() => base.value * 2);

function incrementar41937() {
  base.value++;
}
</script>
