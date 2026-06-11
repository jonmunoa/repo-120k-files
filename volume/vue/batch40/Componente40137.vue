<template>
  <section class="panel-40137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40137");
const base = ref(40137);
const total = computed(() => base.value * 2);

function incrementar40137() {
  base.value++;
}
</script>
