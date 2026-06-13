// fichero 24010 -- macros y constantes
#define LIMITE_24010 24110
#define FACTOR_24010 1

int aplicar_limite24010(int valor) {
    if (valor > LIMITE_24010) return LIMITE_24010;
    return valor * FACTOR_24010;
}
