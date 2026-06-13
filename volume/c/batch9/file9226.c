// fichero 9226 -- macros y constantes
#define LIMITE_9226 9326
#define FACTOR_9226 2

int aplicar_limite9226(int valor) {
    if (valor > LIMITE_9226) return LIMITE_9226;
    return valor * FACTOR_9226;
}
