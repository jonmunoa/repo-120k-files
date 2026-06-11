<template>
  <section class="panel-35157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35157");
const base = ref(35157);
const total = computed(() => base.value * 2);

function incrementar35157() {
  base.value++;
}
</script>
