// fichero 25250 -- macros y constantes -- MODIFICADO
#define LIMITE_25250 25450
#define FACTOR_25250 2

int aplicar_limite25250(int valor) {
    if (valor > LIMITE_25250) return LIMITE_25250;
    return valor * FACTOR_25250;
}
