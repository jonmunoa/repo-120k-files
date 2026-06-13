// fichero 44194 -- macros y constantes
#define LIMITE_44194 44294
#define FACTOR_44194 5

int aplicar_limite44194(int valor) {
    if (valor > LIMITE_44194) return LIMITE_44194;
    return valor * FACTOR_44194;
}
