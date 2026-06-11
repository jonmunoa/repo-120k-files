<template>
  <section class="panel-35113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35113");
const base = ref(35113);
const total = computed(() => base.value * 2);

function incrementar35113() {
  base.value++;
}
</script>
