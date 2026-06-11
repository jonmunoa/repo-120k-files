<template>
  <section class="panel-35117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35117");
const base = ref(35117);
const total = computed(() => base.value * 2);

function incrementar35117() {
  base.value++;
}
</script>
