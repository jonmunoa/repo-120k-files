<template>
  <section class="panel-25921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25921");
const base = ref(25921);
const total = computed(() => base.value * 2);

function incrementar25921() {
  base.value++;
}
</script>
