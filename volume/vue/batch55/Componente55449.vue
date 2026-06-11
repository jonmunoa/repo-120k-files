<template>
  <section class="panel-55449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55449");
const base = ref(55449);
const total = computed(() => base.value * 2);

function incrementar55449() {
  base.value++;
}
</script>
