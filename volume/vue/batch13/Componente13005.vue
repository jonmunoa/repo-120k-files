<template>
  <section class="panel-13005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13005");
const base = ref(13005);
const total = computed(() => base.value * 2);

function incrementar13005() {
  base.value++;
}
</script>
