<template>
  <section class="panel-22605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22605");
const base = ref(22605);
const total = computed(() => base.value * 2);

function incrementar22605() {
  base.value++;
}
</script>
