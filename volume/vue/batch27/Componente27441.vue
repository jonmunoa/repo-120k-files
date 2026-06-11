<template>
  <section class="panel-27441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27441");
const base = ref(27441);
const total = computed(() => base.value * 2);

function incrementar27441() {
  base.value++;
}
</script>
