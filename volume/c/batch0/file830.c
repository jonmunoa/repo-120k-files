// fichero 830 -- macros y constantes -- MODIFICADO
#define LIMITE_830 1030
#define FACTOR_830 2

int aplicar_limite830(int valor) {
    if (valor > LIMITE_830) return LIMITE_830;
    return valor * FACTOR_830;
}
