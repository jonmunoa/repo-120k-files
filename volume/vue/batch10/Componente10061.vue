<template>
  <section class="panel-10061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10061");
const base = ref(10061);
const total = computed(() => base.value * 2);

function incrementar10061() {
  base.value++;
}
</script>
