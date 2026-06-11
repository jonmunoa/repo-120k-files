<template>
  <section class="panel-26081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26081");
const base = ref(26081);
const total = computed(() => base.value * 2);

function incrementar26081() {
  base.value++;
}
</script>
