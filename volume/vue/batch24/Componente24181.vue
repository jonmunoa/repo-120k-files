<template>
  <section class="panel-24181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24181");
const base = ref(24181);
const total = computed(() => base.value * 2);

function incrementar24181() {
  base.value++;
}
</script>
