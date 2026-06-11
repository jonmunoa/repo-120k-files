<template>
  <section class="panel-47489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47489");
const base = ref(47489);
const total = computed(() => base.value * 2);

function incrementar47489() {
  base.value++;
}
</script>
