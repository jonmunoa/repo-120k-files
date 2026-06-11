<template>
  <section class="panel-57861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57861");
const base = ref(57861);
const total = computed(() => base.value * 2);

function incrementar57861() {
  base.value++;
}
</script>
