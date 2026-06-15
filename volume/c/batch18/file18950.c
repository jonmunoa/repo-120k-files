// fichero 18950 -- macros y constantes -- MODIFICADO
#define LIMITE_18950 19150
#define FACTOR_18950 2

int aplicar_limite18950(int valor) {
    if (valor > LIMITE_18950) return LIMITE_18950;
    return valor * FACTOR_18950;
}
