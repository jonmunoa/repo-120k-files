// fichero 12458 -- macros y constantes -- MODIFICADO
#define LIMITE_12458 12658
#define FACTOR_12458 5

int aplicar_limite12458(int valor) {
    if (valor > LIMITE_12458) return LIMITE_12458;
    return valor * FACTOR_12458;
}
