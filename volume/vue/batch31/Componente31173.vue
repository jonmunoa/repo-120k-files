<template>
  <section class="panel-31173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31173");
const base = ref(31173);
const total = computed(() => base.value * 2);

function incrementar31173() {
  base.value++;
}
</script>
