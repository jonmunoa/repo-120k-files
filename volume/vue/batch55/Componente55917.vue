<template>
  <section class="panel-55917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55917");
const base = ref(55917);
const total = computed(() => base.value * 2);

function incrementar55917() {
  base.value++;
}
</script>
