<template>
  <section class="panel-56661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56661");
const base = ref(56661);
const total = computed(() => base.value * 2);

function incrementar56661() {
  base.value++;
}
</script>
