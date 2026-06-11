<template>
  <section class="panel-40061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40061");
const base = ref(40061);
const total = computed(() => base.value * 2);

function incrementar40061() {
  base.value++;
}
</script>
