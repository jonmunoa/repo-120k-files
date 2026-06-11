<template>
  <section class="panel-25401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25401");
const base = ref(25401);
const total = computed(() => base.value * 2);

function incrementar25401() {
  base.value++;
}
</script>
