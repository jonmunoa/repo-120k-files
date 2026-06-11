<template>
  <section class="panel-8825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8825");
const base = ref(8825);
const total = computed(() => base.value * 2);

function incrementar8825() {
  base.value++;
}
</script>
