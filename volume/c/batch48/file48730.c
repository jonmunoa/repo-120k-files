// fichero 48730 -- macros y constantes
#define LIMITE_48730 48830
#define FACTOR_48730 1

int aplicar_limite48730(int valor) {
    if (valor > LIMITE_48730) return LIMITE_48730;
    return valor * FACTOR_48730;
}
