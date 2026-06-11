<template>
  <section class="panel-25913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25913");
const base = ref(25913);
const total = computed(() => base.value * 2);

function incrementar25913() {
  base.value++;
}
</script>
