<template>
  <section class="panel-45457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45457");
const base = ref(45457);
const total = computed(() => base.value * 2);

function incrementar45457() {
  base.value++;
}
</script>
