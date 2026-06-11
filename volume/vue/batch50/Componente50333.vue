<template>
  <section class="panel-50333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50333");
const base = ref(50333);
const total = computed(() => base.value * 2);

function incrementar50333() {
  base.value++;
}
</script>
