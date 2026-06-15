// fichero 9026 -- macros y constantes -- MODIFICADO
#define LIMITE_9026 9226
#define FACTOR_9026 3

int aplicar_limite9026(int valor) {
    if (valor > LIMITE_9026) return LIMITE_9026;
    return valor * FACTOR_9026;
}
