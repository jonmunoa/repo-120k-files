// fichero 10186 -- macros y constantes
#define LIMITE_10186 10286
#define FACTOR_10186 2

int aplicar_limite10186(int valor) {
    if (valor > LIMITE_10186) return LIMITE_10186;
    return valor * FACTOR_10186;
}
