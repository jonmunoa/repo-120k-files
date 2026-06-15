// fichero 34242 -- macros y constantes -- MODIFICADO
#define LIMITE_34242 34442
#define FACTOR_34242 4

int aplicar_limite34242(int valor) {
    if (valor > LIMITE_34242) return LIMITE_34242;
    return valor * FACTOR_34242;
}
