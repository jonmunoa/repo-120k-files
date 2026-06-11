<template>
  <section class="panel-35945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35945");
const base = ref(35945);
const total = computed(() => base.value * 2);

function incrementar35945() {
  base.value++;
}
</script>
