<template>
  <section class="panel-28761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28761");
const base = ref(28761);
const total = computed(() => base.value * 2);

function incrementar28761() {
  base.value++;
}
</script>
