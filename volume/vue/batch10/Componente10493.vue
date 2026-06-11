<template>
  <section class="panel-10493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10493");
const base = ref(10493);
const total = computed(() => base.value * 2);

function incrementar10493() {
  base.value++;
}
</script>
