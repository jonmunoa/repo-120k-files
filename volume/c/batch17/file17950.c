// fichero 17950 -- macros y constantes -- MODIFICADO
#define LIMITE_17950 18150
#define FACTOR_17950 2

int aplicar_limite17950(int valor) {
    if (valor > LIMITE_17950) return LIMITE_17950;
    return valor * FACTOR_17950;
}
