<template>
  <section class="panel-17013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17013");
const base = ref(17013);
const total = computed(() => base.value * 2);

function incrementar17013() {
  base.value++;
}
</script>
