// fichero 28450 -- macros y constantes -- MODIFICADO
#define LIMITE_28450 28650
#define FACTOR_28450 2

int aplicar_limite28450(int valor) {
    if (valor > LIMITE_28450) return LIMITE_28450;
    return valor * FACTOR_28450;
}
