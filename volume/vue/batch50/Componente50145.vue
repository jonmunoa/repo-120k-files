<template>
  <section class="panel-50145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50145");
const base = ref(50145);
const total = computed(() => base.value * 2);

function incrementar50145() {
  base.value++;
}
</script>
