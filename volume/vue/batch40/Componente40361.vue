<template>
  <section class="panel-40361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40361");
const base = ref(40361);
const total = computed(() => base.value * 2);

function incrementar40361() {
  base.value++;
}
</script>
