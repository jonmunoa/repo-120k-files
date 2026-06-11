<template>
  <section class="panel-6013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6013");
const base = ref(6013);
const total = computed(() => base.value * 2);

function incrementar6013() {
  base.value++;
}
</script>
