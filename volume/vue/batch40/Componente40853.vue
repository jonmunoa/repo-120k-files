<template>
  <section class="panel-40853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40853");
const base = ref(40853);
const total = computed(() => base.value * 2);

function incrementar40853() {
  base.value++;
}
</script>
