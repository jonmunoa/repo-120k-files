<template>
  <section class="panel-33597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33597");
const base = ref(33597);
const total = computed(() => base.value * 2);

function incrementar33597() {
  base.value++;
}
</script>
