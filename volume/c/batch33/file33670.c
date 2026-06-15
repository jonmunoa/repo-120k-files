// fichero 33670 -- macros y constantes -- MODIFICADO
#define LIMITE_33670 33870
#define FACTOR_33670 2

int aplicar_limite33670(int valor) {
    if (valor > LIMITE_33670) return LIMITE_33670;
    return valor * FACTOR_33670;
}
