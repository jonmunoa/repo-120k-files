<template>
  <section class="panel-40145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40145");
const base = ref(40145);
const total = computed(() => base.value * 2);

function incrementar40145() {
  base.value++;
}
</script>
