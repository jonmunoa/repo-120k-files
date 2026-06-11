<template>
  <section class="panel-1913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1913");
const base = ref(1913);
const total = computed(() => base.value * 2);

function incrementar1913() {
  base.value++;
}
</script>
