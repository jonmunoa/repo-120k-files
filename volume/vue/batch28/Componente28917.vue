<template>
  <section class="panel-28917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28917");
const base = ref(28917);
const total = computed(() => base.value * 2);

function incrementar28917() {
  base.value++;
}
</script>
