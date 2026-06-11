<template>
  <section class="panel-11737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11737");
const base = ref(11737);
const total = computed(() => base.value * 2);

function incrementar11737() {
  base.value++;
}
</script>
