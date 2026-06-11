<template>
  <section class="panel-55945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55945");
const base = ref(55945);
const total = computed(() => base.value * 2);

function incrementar55945() {
  base.value++;
}
</script>
