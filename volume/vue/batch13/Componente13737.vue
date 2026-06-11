<template>
  <section class="panel-13737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13737");
const base = ref(13737);
const total = computed(() => base.value * 2);

function incrementar13737() {
  base.value++;
}
</script>
