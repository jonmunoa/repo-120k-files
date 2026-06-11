<template>
  <section class="panel-56973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56973");
const base = ref(56973);
const total = computed(() => base.value * 2);

function incrementar56973() {
  base.value++;
}
</script>
