// fichero 2 -- macros y constantes -- MODIFICADO
#define LIMITE_2 202
#define FACTOR_2 4

int aplicar_limite2(int valor) {
    if (valor > LIMITE_2) return LIMITE_2;
    return valor * FACTOR_2;
}
