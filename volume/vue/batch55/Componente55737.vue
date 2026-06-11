<template>
  <section class="panel-55737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55737");
const base = ref(55737);
const total = computed(() => base.value * 2);

function incrementar55737() {
  base.value++;
}
</script>
