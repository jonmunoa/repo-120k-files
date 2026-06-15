// fichero 11014 -- macros y constantes -- MODIFICADO
#define LIMITE_11014 11214
#define FACTOR_11014 6

int aplicar_limite11014(int valor) {
    if (valor > LIMITE_11014) return LIMITE_11014;
    return valor * FACTOR_11014;
}
