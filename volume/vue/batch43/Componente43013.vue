<template>
  <section class="panel-43013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43013");
const base = ref(43013);
const total = computed(() => base.value * 2);

function incrementar43013() {
  base.value++;
}
</script>
