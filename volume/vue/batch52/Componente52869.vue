<template>
  <section class="panel-52869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52869");
const base = ref(52869);
const total = computed(() => base.value * 2);

function incrementar52869() {
  base.value++;
}
</script>
