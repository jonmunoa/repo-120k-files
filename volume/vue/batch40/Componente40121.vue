<template>
  <section class="panel-40121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40121");
const base = ref(40121);
const total = computed(() => base.value * 2);

function incrementar40121() {
  base.value++;
}
</script>
