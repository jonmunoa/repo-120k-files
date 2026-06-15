// fichero 30406 -- macros y constantes -- MODIFICADO
#define LIMITE_30406 30606
#define FACTOR_30406 3

int aplicar_limite30406(int valor) {
    if (valor > LIMITE_30406) return LIMITE_30406;
    return valor * FACTOR_30406;
}
