<template>
  <section class="panel-55973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55973");
const base = ref(55973);
const total = computed(() => base.value * 2);

function incrementar55973() {
  base.value++;
}
</script>
