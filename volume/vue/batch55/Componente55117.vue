<template>
  <section class="panel-55117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55117");
const base = ref(55117);
const total = computed(() => base.value * 2);

function incrementar55117() {
  base.value++;
}
</script>
