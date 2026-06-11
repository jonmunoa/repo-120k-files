<template>
  <section class="panel-48393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48393");
const base = ref(48393);
const total = computed(() => base.value * 2);

function incrementar48393() {
  base.value++;
}
</script>
