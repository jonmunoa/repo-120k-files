<template>
  <section class="panel-53785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53785");
const base = ref(53785);
const total = computed(() => base.value * 2);

function incrementar53785() {
  base.value++;
}
</script>
