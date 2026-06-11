<template>
  <section class="panel-25601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25601");
const base = ref(25601);
const total = computed(() => base.value * 2);

function incrementar25601() {
  base.value++;
}
</script>
