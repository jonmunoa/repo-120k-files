<template>
  <section class="panel-13813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13813");
const base = ref(13813);
const total = computed(() => base.value * 2);

function incrementar13813() {
  base.value++;
}
</script>
