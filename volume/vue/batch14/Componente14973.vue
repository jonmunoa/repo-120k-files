<template>
  <section class="panel-14973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14973");
const base = ref(14973);
const total = computed(() => base.value * 2);

function incrementar14973() {
  base.value++;
}
</script>
