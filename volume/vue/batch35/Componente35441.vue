<template>
  <section class="panel-35441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35441");
const base = ref(35441);
const total = computed(() => base.value * 2);

function incrementar35441() {
  base.value++;
}
</script>
