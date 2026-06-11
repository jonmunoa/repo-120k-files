<template>
  <section class="panel-22253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22253");
const base = ref(22253);
const total = computed(() => base.value * 2);

function incrementar22253() {
  base.value++;
}
</script>
