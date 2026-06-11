<template>
  <section class="panel-3013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3013");
const base = ref(3013);
const total = computed(() => base.value * 2);

function incrementar3013() {
  base.value++;
}
</script>
