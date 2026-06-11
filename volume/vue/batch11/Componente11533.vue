<template>
  <section class="panel-11533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11533");
const base = ref(11533);
const total = computed(() => base.value * 2);

function incrementar11533() {
  base.value++;
}
</script>
