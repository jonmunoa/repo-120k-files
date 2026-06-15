// fichero 44002 -- macros y constantes -- MODIFICADO
#define LIMITE_44002 44202
#define FACTOR_44002 4

int aplicar_limite44002(int valor) {
    if (valor > LIMITE_44002) return LIMITE_44002;
    return valor * FACTOR_44002;
}
