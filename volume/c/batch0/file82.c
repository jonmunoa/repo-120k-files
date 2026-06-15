// fichero 82 -- macros y constantes -- MODIFICADO
#define LIMITE_82 282
#define FACTOR_82 4

int aplicar_limite82(int valor) {
    if (valor > LIMITE_82) return LIMITE_82;
    return valor * FACTOR_82;
}
