// fichero 38810 -- macros y constantes -- MODIFICADO
#define LIMITE_38810 39010
#define FACTOR_38810 2

int aplicar_limite38810(int valor) {
    if (valor > LIMITE_38810) return LIMITE_38810;
    return valor * FACTOR_38810;
}
