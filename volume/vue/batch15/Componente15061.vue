<template>
  <section class="panel-15061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15061");
const base = ref(15061);
const total = computed(() => base.value * 2);

function incrementar15061() {
  base.value++;
}
</script>
