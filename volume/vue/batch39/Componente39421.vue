<template>
  <section class="panel-39421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39421");
const base = ref(39421);
const total = computed(() => base.value * 2);

function incrementar39421() {
  base.value++;
}
</script>
