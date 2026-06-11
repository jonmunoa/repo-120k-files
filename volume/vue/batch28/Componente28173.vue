<template>
  <section class="panel-28173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28173");
const base = ref(28173);
const total = computed(() => base.value * 2);

function incrementar28173() {
  base.value++;
}
</script>
