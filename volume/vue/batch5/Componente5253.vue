<template>
  <section class="panel-5253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5253");
const base = ref(5253);
const total = computed(() => base.value * 2);

function incrementar5253() {
  base.value++;
}
</script>
