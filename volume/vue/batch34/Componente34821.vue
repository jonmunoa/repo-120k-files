<template>
  <section class="panel-34821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34821");
const base = ref(34821);
const total = computed(() => base.value * 2);

function incrementar34821() {
  base.value++;
}
</script>
