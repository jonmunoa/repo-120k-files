// fichero 9458 -- macros y constantes
#define LIMITE_9458 9558
#define FACTOR_9458 4

int aplicar_limite9458(int valor) {
    if (valor > LIMITE_9458) return LIMITE_9458;
    return valor * FACTOR_9458;
}
