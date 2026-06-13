// fichero 40090 -- macros y constantes
#define LIMITE_40090 40190
#define FACTOR_40090 1

int aplicar_limite40090(int valor) {
    if (valor > LIMITE_40090) return LIMITE_40090;
    return valor * FACTOR_40090;
}
