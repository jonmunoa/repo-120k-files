// fichero 43450 -- macros y constantes
#define LIMITE_43450 43550
#define FACTOR_43450 1

int aplicar_limite43450(int valor) {
    if (valor > LIMITE_43450) return LIMITE_43450;
    return valor * FACTOR_43450;
}
