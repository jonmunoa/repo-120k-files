<template>
  <section class="panel-39925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39925");
const base = ref(39925);
const total = computed(() => base.value * 2);

function incrementar39925() {
  base.value++;
}
</script>
