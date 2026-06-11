<template>
  <section class="panel-1013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1013");
const base = ref(1013);
const total = computed(() => base.value * 2);

function incrementar1013() {
  base.value++;
}
</script>
