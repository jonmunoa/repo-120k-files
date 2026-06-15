// fichero 25566 -- macros y constantes -- MODIFICADO
#define LIMITE_25566 25766
#define FACTOR_25566 3

int aplicar_limite25566(int valor) {
    if (valor > LIMITE_25566) return LIMITE_25566;
    return valor * FACTOR_25566;
}
