// fichero 48686 -- macros y constantes -- MODIFICADO
#define LIMITE_48686 48886
#define FACTOR_48686 3

int aplicar_limite48686(int valor) {
    if (valor > LIMITE_48686) return LIMITE_48686;
    return valor * FACTOR_48686;
}
