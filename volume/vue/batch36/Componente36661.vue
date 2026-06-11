<template>
  <section class="panel-36661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36661");
const base = ref(36661);
const total = computed(() => base.value * 2);

function incrementar36661() {
  base.value++;
}
</script>
