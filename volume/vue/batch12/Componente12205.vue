<template>
  <section class="panel-12205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12205");
const base = ref(12205);
const total = computed(() => base.value * 2);

function incrementar12205() {
  base.value++;
}
</script>
