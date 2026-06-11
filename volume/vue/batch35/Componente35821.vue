<template>
  <section class="panel-35821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35821");
const base = ref(35821);
const total = computed(() => base.value * 2);

function incrementar35821() {
  base.value++;
}
</script>
