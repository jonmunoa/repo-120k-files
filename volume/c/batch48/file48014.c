// fichero 48014 -- macros y constantes -- MODIFICADO
#define LIMITE_48014 48214
#define FACTOR_48014 6

int aplicar_limite48014(int valor) {
    if (valor > LIMITE_48014) return LIMITE_48014;
    return valor * FACTOR_48014;
}
