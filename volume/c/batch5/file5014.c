// fichero 5014 -- macros y constantes -- MODIFICADO
#define LIMITE_5014 5214
#define FACTOR_5014 6

int aplicar_limite5014(int valor) {
    if (valor > LIMITE_5014) return LIMITE_5014;
    return valor * FACTOR_5014;
}
