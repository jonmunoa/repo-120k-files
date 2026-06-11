<template>
  <section class="panel-25253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25253");
const base = ref(25253);
const total = computed(() => base.value * 2);

function incrementar25253() {
  base.value++;
}
</script>
