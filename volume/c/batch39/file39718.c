// fichero 39718 -- macros y constantes -- MODIFICADO
#define LIMITE_39718 39918
#define FACTOR_39718 5

int aplicar_limite39718(int valor) {
    if (valor > LIMITE_39718) return LIMITE_39718;
    return valor * FACTOR_39718;
}
