<template>
  <section class="panel-17897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17897");
const base = ref(17897);
const total = computed(() => base.value * 2);

function incrementar17897() {
  base.value++;
}
</script>
