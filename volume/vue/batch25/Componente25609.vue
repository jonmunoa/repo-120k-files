<template>
  <section class="panel-25609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25609");
const base = ref(25609);
const total = computed(() => base.value * 2);

function incrementar25609() {
  base.value++;
}
</script>
