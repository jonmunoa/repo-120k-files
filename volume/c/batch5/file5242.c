// fichero 5242 -- macros y constantes -- MODIFICADO
#define LIMITE_5242 5442
#define FACTOR_5242 4

int aplicar_limite5242(int valor) {
    if (valor > LIMITE_5242) return LIMITE_5242;
    return valor * FACTOR_5242;
}
