<template>
  <section class="panel-25433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25433");
const base = ref(25433);
const total = computed(() => base.value * 2);

function incrementar25433() {
  base.value++;
}
</script>
