<template>
  <section class="panel-25709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25709");
const base = ref(25709);
const total = computed(() => base.value * 2);

function incrementar25709() {
  base.value++;
}
</script>
