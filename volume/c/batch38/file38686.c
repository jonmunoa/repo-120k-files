// fichero 38686 -- macros y constantes
#define LIMITE_38686 38786
#define FACTOR_38686 2

int aplicar_limite38686(int valor) {
    if (valor > LIMITE_38686) return LIMITE_38686;
    return valor * FACTOR_38686;
}
