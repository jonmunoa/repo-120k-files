// fichero 48254 -- macros y constantes
#define LIMITE_48254 48354
#define FACTOR_48254 5

int aplicar_limite48254(int valor) {
    if (valor > LIMITE_48254) return LIMITE_48254;
    return valor * FACTOR_48254;
}
