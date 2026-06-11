<template>
  <section class="panel-17825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17825");
const base = ref(17825);
const total = computed(() => base.value * 2);

function incrementar17825() {
  base.value++;
}
</script>
