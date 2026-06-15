// fichero 950 -- macros y constantes -- MODIFICADO
#define LIMITE_950 1150
#define FACTOR_950 2

int aplicar_limite950(int valor) {
    if (valor > LIMITE_950) return LIMITE_950;
    return valor * FACTOR_950;
}
