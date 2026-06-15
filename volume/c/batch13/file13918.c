// fichero 13918 -- macros y constantes -- MODIFICADO
#define LIMITE_13918 14118
#define FACTOR_13918 5

int aplicar_limite13918(int valor) {
    if (valor > LIMITE_13918) return LIMITE_13918;
    return valor * FACTOR_13918;
}
