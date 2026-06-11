<template>
  <section class="panel-45157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45157");
const base = ref(45157);
const total = computed(() => base.value * 2);

function incrementar45157() {
  base.value++;
}
</script>
