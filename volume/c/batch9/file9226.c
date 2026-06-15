// fichero 9226 -- macros y constantes -- MODIFICADO
#define LIMITE_9226 9426
#define FACTOR_9226 3

int aplicar_limite9226(int valor) {
    if (valor > LIMITE_9226) return LIMITE_9226;
    return valor * FACTOR_9226;
}
