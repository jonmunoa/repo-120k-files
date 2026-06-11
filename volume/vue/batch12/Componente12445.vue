<template>
  <section class="panel-12445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12445");
const base = ref(12445);
const total = computed(() => base.value * 2);

function incrementar12445() {
  base.value++;
}
</script>
