// fichero 48118 -- macros y constantes -- MODIFICADO
#define LIMITE_48118 48318
#define FACTOR_48118 5

int aplicar_limite48118(int valor) {
    if (valor > LIMITE_48118) return LIMITE_48118;
    return valor * FACTOR_48118;
}
