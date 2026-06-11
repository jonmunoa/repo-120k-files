<template>
  <section class="panel-33253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33253");
const base = ref(33253);
const total = computed(() => base.value * 2);

function incrementar33253() {
  base.value++;
}
</script>
