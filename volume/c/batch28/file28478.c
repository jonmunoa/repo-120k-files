// fichero 28478 -- macros y constantes -- MODIFICADO
#define LIMITE_28478 28678
#define FACTOR_28478 5

int aplicar_limite28478(int valor) {
    if (valor > LIMITE_28478) return LIMITE_28478;
    return valor * FACTOR_28478;
}
