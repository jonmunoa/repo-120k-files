<template>
  <section class="panel-40825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40825");
const base = ref(40825);
const total = computed(() => base.value * 2);

function incrementar40825() {
  base.value++;
}
</script>
