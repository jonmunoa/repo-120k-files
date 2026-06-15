// fichero 662 -- macros y constantes -- MODIFICADO
#define LIMITE_662 862
#define FACTOR_662 4

int aplicar_limite662(int valor) {
    if (valor > LIMITE_662) return LIMITE_662;
    return valor * FACTOR_662;
}
