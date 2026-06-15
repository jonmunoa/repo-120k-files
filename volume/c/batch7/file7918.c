// fichero 7918 -- macros y constantes -- MODIFICADO
#define LIMITE_7918 8118
#define FACTOR_7918 5

int aplicar_limite7918(int valor) {
    if (valor > LIMITE_7918) return LIMITE_7918;
    return valor * FACTOR_7918;
}
