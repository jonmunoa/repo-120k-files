<template>
  <section class="panel-11973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11973");
const base = ref(11973);
const total = computed(() => base.value * 2);

function incrementar11973() {
  base.value++;
}
</script>
