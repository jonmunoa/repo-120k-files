<template>
  <section class="panel-12217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12217");
const base = ref(12217);
const total = computed(() => base.value * 2);

function incrementar12217() {
  base.value++;
}
</script>
