<template>
  <section class="panel-47973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47973");
const base = ref(47973);
const total = computed(() => base.value * 2);

function incrementar47973() {
  base.value++;
}
</script>
