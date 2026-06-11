<template>
  <section class="panel-25853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25853");
const base = ref(25853);
const total = computed(() => base.value * 2);

function incrementar25853() {
  base.value++;
}
</script>
