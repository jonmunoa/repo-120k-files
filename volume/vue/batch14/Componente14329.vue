<template>
  <section class="panel-14329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14329");
const base = ref(14329);
const total = computed(() => base.value * 2);

function incrementar14329() {
  base.value++;
}
</script>
