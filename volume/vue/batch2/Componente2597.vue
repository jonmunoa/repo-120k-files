<template>
  <section class="panel-2597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2597");
const base = ref(2597);
const total = computed(() => base.value * 2);

function incrementar2597() {
  base.value++;
}
</script>
