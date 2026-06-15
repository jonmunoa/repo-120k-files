// fichero 25014 -- macros y constantes -- MODIFICADO
#define LIMITE_25014 25214
#define FACTOR_25014 6

int aplicar_limite25014(int valor) {
    if (valor > LIMITE_25014) return LIMITE_25014;
    return valor * FACTOR_25014;
}
