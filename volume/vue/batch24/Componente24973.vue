<template>
  <section class="panel-24973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24973");
const base = ref(24973);
const total = computed(() => base.value * 2);

function incrementar24973() {
  base.value++;
}
</script>
