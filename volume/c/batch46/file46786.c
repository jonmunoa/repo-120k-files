// fichero 46786 -- macros y constantes -- MODIFICADO
#define LIMITE_46786 46986
#define FACTOR_46786 3

int aplicar_limite46786(int valor) {
    if (valor > LIMITE_46786) return LIMITE_46786;
    return valor * FACTOR_46786;
}
