// fichero 25426 -- macros y constantes -- MODIFICADO
#define LIMITE_25426 25626
#define FACTOR_25426 3

int aplicar_limite25426(int valor) {
    if (valor > LIMITE_25426) return LIMITE_25426;
    return valor * FACTOR_25426;
}
