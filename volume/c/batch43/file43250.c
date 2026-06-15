// fichero 43250 -- macros y constantes -- MODIFICADO
#define LIMITE_43250 43450
#define FACTOR_43250 2

int aplicar_limite43250(int valor) {
    if (valor > LIMITE_43250) return LIMITE_43250;
    return valor * FACTOR_43250;
}
