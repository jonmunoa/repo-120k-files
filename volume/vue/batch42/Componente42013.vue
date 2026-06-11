<template>
  <section class="panel-42013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42013");
const base = ref(42013);
const total = computed(() => base.value * 2);

function incrementar42013() {
  base.value++;
}
</script>
