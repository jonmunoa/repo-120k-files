// fichero 38662 -- macros y constantes -- MODIFICADO
#define LIMITE_38662 38862
#define FACTOR_38662 4

int aplicar_limite38662(int valor) {
    if (valor > LIMITE_38662) return LIMITE_38662;
    return valor * FACTOR_38662;
}
