// fichero 3614 -- macros y constantes -- MODIFICADO
#define LIMITE_3614 3814
#define FACTOR_3614 6

int aplicar_limite3614(int valor) {
    if (valor > LIMITE_3614) return LIMITE_3614;
    return valor * FACTOR_3614;
}
