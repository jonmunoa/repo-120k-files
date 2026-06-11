<template>
  <section class="panel-35481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35481");
const base = ref(35481);
const total = computed(() => base.value * 2);

function incrementar35481() {
  base.value++;
}
</script>
