// fichero 44082 -- macros y constantes -- MODIFICADO
#define LIMITE_44082 44282
#define FACTOR_44082 4

int aplicar_limite44082(int valor) {
    if (valor > LIMITE_44082) return LIMITE_44082;
    return valor * FACTOR_44082;
}
