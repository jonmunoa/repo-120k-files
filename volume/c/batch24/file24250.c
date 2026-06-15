// fichero 24250 -- macros y constantes -- MODIFICADO
#define LIMITE_24250 24450
#define FACTOR_24250 2

int aplicar_limite24250(int valor) {
    if (valor > LIMITE_24250) return LIMITE_24250;
    return valor * FACTOR_24250;
}
