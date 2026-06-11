<template>
  <section class="panel-40209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40209");
const base = ref(40209);
const total = computed(() => base.value * 2);

function incrementar40209() {
  base.value++;
}
</script>
