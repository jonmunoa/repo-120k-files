<template>
  <section class="panel-14849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14849");
const base = ref(14849);
const total = computed(() => base.value * 2);

function incrementar14849() {
  base.value++;
}
</script>
