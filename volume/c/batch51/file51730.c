// fichero 51730 -- macros y constantes
#define LIMITE_51730 51830
#define FACTOR_51730 1

int aplicar_limite51730(int valor) {
    if (valor > LIMITE_51730) return LIMITE_51730;
    return valor * FACTOR_51730;
}
