<template>
  <section class="panel-47457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47457");
const base = ref(47457);
const total = computed(() => base.value * 2);

function incrementar47457() {
  base.value++;
}
</script>
