<template>
  <section class="panel-40253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40253");
const base = ref(40253);
const total = computed(() => base.value * 2);

function incrementar40253() {
  base.value++;
}
</script>
