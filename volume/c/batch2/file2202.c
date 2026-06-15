// fichero 2202 -- macros y constantes -- MODIFICADO
#define LIMITE_2202 2402
#define FACTOR_2202 4

int aplicar_limite2202(int valor) {
    if (valor > LIMITE_2202) return LIMITE_2202;
    return valor * FACTOR_2202;
}
