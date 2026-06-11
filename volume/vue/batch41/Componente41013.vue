<template>
  <section class="panel-41013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41013");
const base = ref(41013);
const total = computed(() => base.value * 2);

function incrementar41013() {
  base.value++;
}
</script>
