<template>
  <section class="panel-6145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6145");
const base = ref(6145);
const total = computed(() => base.value * 2);

function incrementar6145() {
  base.value++;
}
</script>
