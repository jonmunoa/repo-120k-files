<template>
  <section class="panel-37973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37973");
const base = ref(37973);
const total = computed(() => base.value * 2);

function incrementar37973() {
  base.value++;
}
</script>
