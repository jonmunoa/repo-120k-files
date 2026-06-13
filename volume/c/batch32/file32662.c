// fichero 32662 -- macros y constantes
#define LIMITE_32662 32762
#define FACTOR_32662 3

int aplicar_limite32662(int valor) {
    if (valor > LIMITE_32662) return LIMITE_32662;
    return valor * FACTOR_32662;
}
