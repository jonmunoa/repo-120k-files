<template>
  <section class="panel-11861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11861");
const base = ref(11861);
const total = computed(() => base.value * 2);

function incrementar11861() {
  base.value++;
}
</script>
