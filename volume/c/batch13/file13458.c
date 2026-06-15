// fichero 13458 -- macros y constantes -- MODIFICADO
#define LIMITE_13458 13658
#define FACTOR_13458 5

int aplicar_limite13458(int valor) {
    if (valor > LIMITE_13458) return LIMITE_13458;
    return valor * FACTOR_13458;
}
