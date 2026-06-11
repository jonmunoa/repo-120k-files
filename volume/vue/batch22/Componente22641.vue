<template>
  <section class="panel-22641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22641");
const base = ref(22641);
const total = computed(() => base.value * 2);

function incrementar22641() {
  base.value++;
}
</script>
