<template>
  <section class="panel-56709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56709");
const base = ref(56709);
const total = computed(() => base.value * 2);

function incrementar56709() {
  base.value++;
}
</script>
