<template>
  <section class="panel-7533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7533");
const base = ref(7533);
const total = computed(() => base.value * 2);

function incrementar7533() {
  base.value++;
}
</script>
