<template>
  <section class="panel-2709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2709");
const base = ref(2709);
const total = computed(() => base.value * 2);

function incrementar2709() {
  base.value++;
}
</script>
