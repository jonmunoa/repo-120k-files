<template>
  <section class="panel-50893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50893");
const base = ref(50893);
const total = computed(() => base.value * 2);

function incrementar50893() {
  base.value++;
}
</script>
