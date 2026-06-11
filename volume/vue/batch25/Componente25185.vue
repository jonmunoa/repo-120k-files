<template>
  <section class="panel-25185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25185");
const base = ref(25185);
const total = computed(() => base.value * 2);

function incrementar25185() {
  base.value++;
}
</script>
