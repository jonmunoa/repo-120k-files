<template>
  <section class="panel-33061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33061");
const base = ref(33061);
const total = computed(() => base.value * 2);

function incrementar33061() {
  base.value++;
}
</script>
