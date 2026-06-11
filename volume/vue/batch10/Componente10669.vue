<template>
  <section class="panel-10669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10669");
const base = ref(10669);
const total = computed(() => base.value * 2);

function incrementar10669() {
  base.value++;
}
</script>
