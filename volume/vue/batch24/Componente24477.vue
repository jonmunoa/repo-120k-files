<template>
  <section class="panel-24477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24477");
const base = ref(24477);
const total = computed(() => base.value * 2);

function incrementar24477() {
  base.value++;
}
</script>
