// fichero 49214 -- macros y constantes -- MODIFICADO
#define LIMITE_49214 49414
#define FACTOR_49214 6

int aplicar_limite49214(int valor) {
    if (valor > LIMITE_49214) return LIMITE_49214;
    return valor * FACTOR_49214;
}
