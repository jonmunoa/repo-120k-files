<template>
  <section class="panel-38661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38661");
const base = ref(38661);
const total = computed(() => base.value * 2);

function incrementar38661() {
  base.value++;
}
</script>
