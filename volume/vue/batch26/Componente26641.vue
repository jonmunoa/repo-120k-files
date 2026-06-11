<template>
  <section class="panel-26641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26641");
const base = ref(26641);
const total = computed(() => base.value * 2);

function incrementar26641() {
  base.value++;
}
</script>
