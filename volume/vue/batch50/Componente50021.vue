<template>
  <section class="panel-50021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50021");
const base = ref(50021);
const total = computed(() => base.value * 2);

function incrementar50021() {
  base.value++;
}
</script>
