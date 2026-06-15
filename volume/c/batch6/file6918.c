// fichero 6918 -- macros y constantes -- MODIFICADO
#define LIMITE_6918 7118
#define FACTOR_6918 5

int aplicar_limite6918(int valor) {
    if (valor > LIMITE_6918) return LIMITE_6918;
    return valor * FACTOR_6918;
}
