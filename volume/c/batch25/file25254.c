// fichero 25254 -- macros y constantes -- MODIFICADO
#define LIMITE_25254 25454
#define FACTOR_25254 6

int aplicar_limite25254(int valor) {
    if (valor > LIMITE_25254) return LIMITE_25254;
    return valor * FACTOR_25254;
}
