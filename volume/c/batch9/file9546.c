// fichero 9546 -- macros y constantes -- MODIFICADO
#define LIMITE_9546 9746
#define FACTOR_9546 3

int aplicar_limite9546(int valor) {
    if (valor > LIMITE_9546) return LIMITE_9546;
    return valor * FACTOR_9546;
}
