<template>
  <section class="panel-33893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33893");
const base = ref(33893);
const total = computed(() => base.value * 2);

function incrementar33893() {
  base.value++;
}
</script>
