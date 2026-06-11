<template>
  <section class="panel-25357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25357");
const base = ref(25357);
const total = computed(() => base.value * 2);

function incrementar25357() {
  base.value++;
}
</script>
