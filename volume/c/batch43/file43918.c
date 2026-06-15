// fichero 43918 -- macros y constantes -- MODIFICADO
#define LIMITE_43918 44118
#define FACTOR_43918 5

int aplicar_limite43918(int valor) {
    if (valor > LIMITE_43918) return LIMITE_43918;
    return valor * FACTOR_43918;
}
