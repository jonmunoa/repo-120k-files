<template>
  <section class="panel-13253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13253");
const base = ref(13253);
const total = computed(() => base.value * 2);

function incrementar13253() {
  base.value++;
}
</script>
