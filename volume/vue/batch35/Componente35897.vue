<template>
  <section class="panel-35897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35897");
const base = ref(35897);
const total = computed(() => base.value * 2);

function incrementar35897() {
  base.value++;
}
</script>
