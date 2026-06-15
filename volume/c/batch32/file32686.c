// fichero 32686 -- macros y constantes -- MODIFICADO
#define LIMITE_32686 32886
#define FACTOR_32686 3

int aplicar_limite32686(int valor) {
    if (valor > LIMITE_32686) return LIMITE_32686;
    return valor * FACTOR_32686;
}
