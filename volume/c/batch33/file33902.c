// fichero 33902 -- macros y constantes -- MODIFICADO
#define LIMITE_33902 34102
#define FACTOR_33902 4

int aplicar_limite33902(int valor) {
    if (valor > LIMITE_33902) return LIMITE_33902;
    return valor * FACTOR_33902;
}
