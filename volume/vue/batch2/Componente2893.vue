<template>
  <section class="panel-2893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2893");
const base = ref(2893);
const total = computed(() => base.value * 2);

function incrementar2893() {
  base.value++;
}
</script>
