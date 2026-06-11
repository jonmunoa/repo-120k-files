<template>
  <section class="panel-477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 477");
const base = ref(477);
const total = computed(() => base.value * 2);

function incrementar477() {
  base.value++;
}
</script>
