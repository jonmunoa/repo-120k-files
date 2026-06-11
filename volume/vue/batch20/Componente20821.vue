<template>
  <section class="panel-20821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20821");
const base = ref(20821);
const total = computed(() => base.value * 2);

function incrementar20821() {
  base.value++;
}
</script>
