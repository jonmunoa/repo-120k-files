// fichero 44214 -- macros y constantes -- MODIFICADO
#define LIMITE_44214 44414
#define FACTOR_44214 6

int aplicar_limite44214(int valor) {
    if (valor > LIMITE_44214) return LIMITE_44214;
    return valor * FACTOR_44214;
}
