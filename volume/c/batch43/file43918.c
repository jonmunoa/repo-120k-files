// fichero 43918 -- macros y constantes
#define LIMITE_43918 44018
#define FACTOR_43918 4

int aplicar_limite43918(int valor) {
    if (valor > LIMITE_43918) return LIMITE_43918;
    return valor * FACTOR_43918;
}
