<template>
  <section class="panel-55601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55601");
const base = ref(55601);
const total = computed(() => base.value * 2);

function incrementar55601() {
  base.value++;
}
</script>
