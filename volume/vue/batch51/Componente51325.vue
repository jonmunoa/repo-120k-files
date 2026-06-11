<template>
  <section class="panel-51325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51325");
const base = ref(51325);
const total = computed(() => base.value * 2);

function incrementar51325() {
  base.value++;
}
</script>
