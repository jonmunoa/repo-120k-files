// fichero 12242 -- macros y constantes -- MODIFICADO
#define LIMITE_12242 12442
#define FACTOR_12242 4

int aplicar_limite12242(int valor) {
    if (valor > LIMITE_12242) return LIMITE_12242;
    return valor * FACTOR_12242;
}
