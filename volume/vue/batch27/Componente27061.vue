<template>
  <section class="panel-27061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27061");
const base = ref(27061);
const total = computed(() => base.value * 2);

function incrementar27061() {
  base.value++;
}
</script>
