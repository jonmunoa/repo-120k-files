<template>
  <section class="panel-35533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35533");
const base = ref(35533);
const total = computed(() => base.value * 2);

function incrementar35533() {
  base.value++;
}
</script>
