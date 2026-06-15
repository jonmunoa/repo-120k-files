// fichero 35918 -- macros y constantes -- MODIFICADO
#define LIMITE_35918 36118
#define FACTOR_35918 5

int aplicar_limite35918(int valor) {
    if (valor > LIMITE_35918) return LIMITE_35918;
    return valor * FACTOR_35918;
}
