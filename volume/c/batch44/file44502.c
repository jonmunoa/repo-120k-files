// fichero 44502 -- macros y constantes -- MODIFICADO
#define LIMITE_44502 44702
#define FACTOR_44502 4

int aplicar_limite44502(int valor) {
    if (valor > LIMITE_44502) return LIMITE_44502;
    return valor * FACTOR_44502;
}
