// fichero 21190 -- macros y constantes
#define LIMITE_21190 21290
#define FACTOR_21190 1

int aplicar_limite21190(int valor) {
    if (valor > LIMITE_21190) return LIMITE_21190;
    return valor * FACTOR_21190;
}
