<template>
  <section class="panel-57133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57133");
const base = ref(57133);
const total = computed(() => base.value * 2);

function incrementar57133() {
  base.value++;
}
</script>
