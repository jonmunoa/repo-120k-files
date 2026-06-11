<template>
  <section class="panel-11825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11825");
const base = ref(11825);
const total = computed(() => base.value * 2);

function incrementar11825() {
  base.value++;
}
</script>
