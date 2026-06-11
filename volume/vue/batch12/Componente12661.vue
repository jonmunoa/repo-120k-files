<template>
  <section class="panel-12661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12661");
const base = ref(12661);
const total = computed(() => base.value * 2);

function incrementar12661() {
  base.value++;
}
</script>
