<template>
  <section class="panel-51365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51365");
const base = ref(51365);
const total = computed(() => base.value * 2);

function incrementar51365() {
  base.value++;
}
</script>
