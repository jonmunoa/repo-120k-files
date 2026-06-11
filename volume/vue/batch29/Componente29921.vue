<template>
  <section class="panel-29921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29921");
const base = ref(29921);
const total = computed(() => base.value * 2);

function incrementar29921() {
  base.value++;
}
</script>
