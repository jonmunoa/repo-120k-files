// fichero 48902 -- macros y constantes
#define LIMITE_48902 49002
#define FACTOR_48902 3

int aplicar_limite48902(int valor) {
    if (valor > LIMITE_48902) return LIMITE_48902;
    return valor * FACTOR_48902;
}
