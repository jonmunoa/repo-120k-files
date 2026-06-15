// fichero 41686 -- macros y constantes -- MODIFICADO
#define LIMITE_41686 41886
#define FACTOR_41686 3

int aplicar_limite41686(int valor) {
    if (valor > LIMITE_41686) return LIMITE_41686;
    return valor * FACTOR_41686;
}
