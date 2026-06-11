<template>
  <section class="panel-28293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28293");
const base = ref(28293);
const total = computed(() => base.value * 2);

function incrementar28293() {
  base.value++;
}
</script>
