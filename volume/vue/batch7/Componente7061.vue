<template>
  <section class="panel-7061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7061");
const base = ref(7061);
const total = computed(() => base.value * 2);

function incrementar7061() {
  base.value++;
}
</script>
