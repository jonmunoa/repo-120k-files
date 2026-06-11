<template>
  <section class="panel-35833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35833");
const base = ref(35833);
const total = computed(() => base.value * 2);

function incrementar35833() {
  base.value++;
}
</script>
