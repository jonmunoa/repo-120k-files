<template>
  <section class="panel-40569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40569");
const base = ref(40569);
const total = computed(() => base.value * 2);

function incrementar40569() {
  base.value++;
}
</script>
