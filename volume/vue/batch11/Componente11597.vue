<template>
  <section class="panel-11597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11597");
const base = ref(11597);
const total = computed(() => base.value * 2);

function incrementar11597() {
  base.value++;
}
</script>
