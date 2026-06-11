<template>
  <section class="panel-24661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24661");
const base = ref(24661);
const total = computed(() => base.value * 2);

function incrementar24661() {
  base.value++;
}
</script>
