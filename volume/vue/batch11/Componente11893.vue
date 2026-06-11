<template>
  <section class="panel-11893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11893");
const base = ref(11893);
const total = computed(() => base.value * 2);

function incrementar11893() {
  base.value++;
}
</script>
