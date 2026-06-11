<template>
  <section class="panel-35669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35669");
const base = ref(35669);
const total = computed(() => base.value * 2);

function incrementar35669() {
  base.value++;
}
</script>
