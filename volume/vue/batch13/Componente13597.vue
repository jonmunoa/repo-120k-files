<template>
  <section class="panel-13597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13597");
const base = ref(13597);
const total = computed(() => base.value * 2);

function incrementar13597() {
  base.value++;
}
</script>
