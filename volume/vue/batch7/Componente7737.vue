<template>
  <section class="panel-7737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7737");
const base = ref(7737);
const total = computed(() => base.value * 2);

function incrementar7737() {
  base.value++;
}
</script>
