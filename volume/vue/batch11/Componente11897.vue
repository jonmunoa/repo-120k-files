<template>
  <section class="panel-11897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11897");
const base = ref(11897);
const total = computed(() => base.value * 2);

function incrementar11897() {
  base.value++;
}
</script>
