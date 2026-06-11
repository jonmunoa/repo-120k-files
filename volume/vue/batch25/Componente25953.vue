<template>
  <section class="panel-25953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25953");
const base = ref(25953);
const total = computed(() => base.value * 2);

function incrementar25953() {
  base.value++;
}
</script>
