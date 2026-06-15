// fichero 33810 -- macros y constantes -- MODIFICADO
#define LIMITE_33810 34010
#define FACTOR_33810 2

int aplicar_limite33810(int valor) {
    if (valor > LIMITE_33810) return LIMITE_33810;
    return valor * FACTOR_33810;
}
