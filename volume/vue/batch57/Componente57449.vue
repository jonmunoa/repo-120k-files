<template>
  <section class="panel-57449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57449");
const base = ref(57449);
const total = computed(() => base.value * 2);

function incrementar57449() {
  base.value++;
}
</script>
