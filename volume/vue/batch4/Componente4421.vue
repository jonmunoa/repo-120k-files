<template>
  <section class="panel-4421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4421");
const base = ref(4421);
const total = computed(() => base.value * 2);

function incrementar4421() {
  base.value++;
}
</script>
