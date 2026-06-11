<template>
  <section class="panel-13765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13765");
const base = ref(13765);
const total = computed(() => base.value * 2);

function incrementar13765() {
  base.value++;
}
</script>
