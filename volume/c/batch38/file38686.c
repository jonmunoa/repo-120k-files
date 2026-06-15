// fichero 38686 -- macros y constantes -- MODIFICADO
#define LIMITE_38686 38886
#define FACTOR_38686 3

int aplicar_limite38686(int valor) {
    if (valor > LIMITE_38686) return LIMITE_38686;
    return valor * FACTOR_38686;
}
