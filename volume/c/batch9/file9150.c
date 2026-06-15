// fichero 9150 -- macros y constantes -- MODIFICADO
#define LIMITE_9150 9350
#define FACTOR_9150 2

int aplicar_limite9150(int valor) {
    if (valor > LIMITE_9150) return LIMITE_9150;
    return valor * FACTOR_9150;
}
