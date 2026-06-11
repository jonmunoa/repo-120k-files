<template>
  <section class="panel-577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 577");
const base = ref(577);
const total = computed(() => base.value * 2);

function incrementar577() {
  base.value++;
}
</script>
