<template>
  <section class="panel-35405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35405");
const base = ref(35405);
const total = computed(() => base.value * 2);

function incrementar35405() {
  base.value++;
}
</script>
