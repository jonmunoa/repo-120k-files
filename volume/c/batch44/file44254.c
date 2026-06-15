// fichero 44254 -- macros y constantes -- MODIFICADO
#define LIMITE_44254 44454
#define FACTOR_44254 6

int aplicar_limite44254(int valor) {
    if (valor > LIMITE_44254) return LIMITE_44254;
    return valor * FACTOR_44254;
}
