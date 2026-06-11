<template>
  <section class="panel-35825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35825");
const base = ref(35825);
const total = computed(() => base.value * 2);

function incrementar35825() {
  base.value++;
}
</script>
