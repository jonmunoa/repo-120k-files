// fichero 15950 -- macros y constantes
#define LIMITE_15950 16050
#define FACTOR_15950 1

int aplicar_limite15950(int valor) {
    if (valor > LIMITE_15950) return LIMITE_15950;
    return valor * FACTOR_15950;
}
