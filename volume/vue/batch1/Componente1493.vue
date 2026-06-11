<template>
  <section class="panel-1493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1493");
const base = ref(1493);
const total = computed(() => base.value * 2);

function incrementar1493() {
  base.value++;
}
</script>
