<template>
  <section class="panel-56785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56785");
const base = ref(56785);
const total = computed(() => base.value * 2);

function incrementar56785() {
  base.value++;
}
</script>
