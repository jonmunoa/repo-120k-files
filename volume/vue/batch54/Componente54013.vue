<template>
  <section class="panel-54013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54013");
const base = ref(54013);
const total = computed(() => base.value * 2);

function incrementar54013() {
  base.value++;
}
</script>
