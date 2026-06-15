// fichero 43450 -- macros y constantes -- MODIFICADO
#define LIMITE_43450 43650
#define FACTOR_43450 2

int aplicar_limite43450(int valor) {
    if (valor > LIMITE_43450) return LIMITE_43450;
    return valor * FACTOR_43450;
}
