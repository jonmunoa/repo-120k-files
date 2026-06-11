<template>
  <section class="panel-5217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5217");
const base = ref(5217);
const total = computed(() => base.value * 2);

function incrementar5217() {
  base.value++;
}
</script>
