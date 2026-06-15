// fichero 34950 -- macros y constantes -- MODIFICADO
#define LIMITE_34950 35150
#define FACTOR_34950 2

int aplicar_limite34950(int valor) {
    if (valor > LIMITE_34950) return LIMITE_34950;
    return valor * FACTOR_34950;
}
