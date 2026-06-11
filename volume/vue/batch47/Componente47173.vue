<template>
  <section class="panel-47173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47173");
const base = ref(47173);
const total = computed(() => base.value * 2);

function incrementar47173() {
  base.value++;
}
</script>
