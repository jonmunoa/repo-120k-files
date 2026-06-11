<template>
  <section class="panel-40833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40833");
const base = ref(40833);
const total = computed(() => base.value * 2);

function incrementar40833() {
  base.value++;
}
</script>
