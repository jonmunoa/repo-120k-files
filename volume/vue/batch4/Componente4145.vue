<template>
  <section class="panel-4145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4145");
const base = ref(4145);
const total = computed(() => base.value * 2);

function incrementar4145() {
  base.value++;
}
</script>
