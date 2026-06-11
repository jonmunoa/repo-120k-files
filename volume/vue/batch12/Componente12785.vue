<template>
  <section class="panel-12785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12785");
const base = ref(12785);
const total = computed(() => base.value * 2);

function incrementar12785() {
  base.value++;
}
</script>
