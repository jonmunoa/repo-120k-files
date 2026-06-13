// fichero 54350 -- macros y constantes
#define LIMITE_54350 54450
#define FACTOR_54350 1

int aplicar_limite54350(int valor) {
    if (valor > LIMITE_54350) return LIMITE_54350;
    return valor * FACTOR_54350;
}
