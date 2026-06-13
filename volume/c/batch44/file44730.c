// fichero 44730 -- macros y constantes
#define LIMITE_44730 44830
#define FACTOR_44730 1

int aplicar_limite44730(int valor) {
    if (valor > LIMITE_44730) return LIMITE_44730;
    return valor * FACTOR_44730;
}
