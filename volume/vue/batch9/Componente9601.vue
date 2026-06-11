<template>
  <section class="panel-9601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9601");
const base = ref(9601);
const total = computed(() => base.value * 2);

function incrementar9601() {
  base.value++;
}
</script>
