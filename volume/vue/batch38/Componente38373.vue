<template>
  <section class="panel-38373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38373");
const base = ref(38373);
const total = computed(() => base.value * 2);

function incrementar38373() {
  base.value++;
}
</script>
