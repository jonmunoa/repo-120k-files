<template>
  <section class="panel-12181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12181");
const base = ref(12181);
const total = computed(() => base.value * 2);

function incrementar12181() {
  base.value++;
}
</script>
