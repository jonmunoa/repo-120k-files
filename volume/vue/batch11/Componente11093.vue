<template>
  <section class="panel-11093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11093");
const base = ref(11093);
const total = computed(() => base.value * 2);

function incrementar11093() {
  base.value++;
}
</script>
