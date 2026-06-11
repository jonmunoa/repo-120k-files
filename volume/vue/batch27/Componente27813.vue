<template>
  <section class="panel-27813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27813");
const base = ref(27813);
const total = computed(() => base.value * 2);

function incrementar27813() {
  base.value++;
}
</script>
