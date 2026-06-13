// fichero 6194 -- macros y constantes
#define LIMITE_6194 6294
#define FACTOR_6194 5

int aplicar_limite6194(int valor) {
    if (valor > LIMITE_6194) return LIMITE_6194;
    return valor * FACTOR_6194;
}
