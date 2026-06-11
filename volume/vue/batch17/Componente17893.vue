<template>
  <section class="panel-17893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17893");
const base = ref(17893);
const total = computed(() => base.value * 2);

function incrementar17893() {
  base.value++;
}
</script>
