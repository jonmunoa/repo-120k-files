<template>
  <section class="panel-11205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11205");
const base = ref(11205);
const total = computed(() => base.value * 2);

function incrementar11205() {
  base.value++;
}
</script>
