<template>
  <section class="panel-40301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40301");
const base = ref(40301);
const total = computed(() => base.value * 2);

function incrementar40301() {
  base.value++;
}
</script>
