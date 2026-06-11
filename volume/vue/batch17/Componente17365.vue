<template>
  <section class="panel-17365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17365");
const base = ref(17365);
const total = computed(() => base.value * 2);

function incrementar17365() {
  base.value++;
}
</script>
