<template>
  <section class="panel-2861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2861");
const base = ref(2861);
const total = computed(() => base.value * 2);

function incrementar2861() {
  base.value++;
}
</script>
