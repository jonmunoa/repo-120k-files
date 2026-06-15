// fichero 8770 -- macros y constantes -- MODIFICADO
#define LIMITE_8770 8970
#define FACTOR_8770 2

int aplicar_limite8770(int valor) {
    if (valor > LIMITE_8770) return LIMITE_8770;
    return valor * FACTOR_8770;
}
