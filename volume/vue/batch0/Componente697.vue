<template>
  <section class="panel-697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 697");
const base = ref(697);
const total = computed(() => base.value * 2);

function incrementar697() {
  base.value++;
}
</script>
