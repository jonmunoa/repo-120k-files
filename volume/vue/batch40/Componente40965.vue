<template>
  <section class="panel-40965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40965");
const base = ref(40965);
const total = computed(() => base.value * 2);

function incrementar40965() {
  base.value++;
}
</script>
