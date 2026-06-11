<template>
  <section class="panel-47597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47597");
const base = ref(47597);
const total = computed(() => base.value * 2);

function incrementar47597() {
  base.value++;
}
</script>
