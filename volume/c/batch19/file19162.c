// fichero 19162 -- macros y constantes
#define LIMITE_19162 19262
#define FACTOR_19162 3

int aplicar_limite19162(int valor) {
    if (valor > LIMITE_19162) return LIMITE_19162;
    return valor * FACTOR_19162;
}
