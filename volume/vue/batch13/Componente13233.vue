<template>
  <section class="panel-13233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13233");
const base = ref(13233);
const total = computed(() => base.value * 2);

function incrementar13233() {
  base.value++;
}
</script>
