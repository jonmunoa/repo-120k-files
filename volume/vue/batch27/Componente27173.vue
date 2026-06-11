<template>
  <section class="panel-27173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27173");
const base = ref(27173);
const total = computed(() => base.value * 2);

function incrementar27173() {
  base.value++;
}
</script>
