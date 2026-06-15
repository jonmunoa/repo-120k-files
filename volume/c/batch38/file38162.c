// fichero 38162 -- macros y constantes -- MODIFICADO
#define LIMITE_38162 38362
#define FACTOR_38162 4

int aplicar_limite38162(int valor) {
    if (valor > LIMITE_38162) return LIMITE_38162;
    return valor * FACTOR_38162;
}
