<template>
  <section class="panel-18785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18785");
const base = ref(18785);
const total = computed(() => base.value * 2);

function incrementar18785() {
  base.value++;
}
</script>
