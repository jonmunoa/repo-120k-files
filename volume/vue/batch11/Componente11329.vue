<template>
  <section class="panel-11329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11329");
const base = ref(11329);
const total = computed(() => base.value * 2);

function incrementar11329() {
  base.value++;
}
</script>
