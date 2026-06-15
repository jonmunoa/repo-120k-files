// fichero 5950 -- macros y constantes -- MODIFICADO
#define LIMITE_5950 6150
#define FACTOR_5950 2

int aplicar_limite5950(int valor) {
    if (valor > LIMITE_5950) return LIMITE_5950;
    return valor * FACTOR_5950;
}
