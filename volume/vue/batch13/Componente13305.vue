<template>
  <section class="panel-13305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13305");
const base = ref(13305);
const total = computed(() => base.value * 2);

function incrementar13305() {
  base.value++;
}
</script>
