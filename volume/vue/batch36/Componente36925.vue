<template>
  <section class="panel-36925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36925");
const base = ref(36925);
const total = computed(() => base.value * 2);

function incrementar36925() {
  base.value++;
}
</script>
