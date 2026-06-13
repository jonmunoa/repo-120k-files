// fichero 40450 -- macros y constantes
#define LIMITE_40450 40550
#define FACTOR_40450 1

int aplicar_limite40450(int valor) {
    if (valor > LIMITE_40450) return LIMITE_40450;
    return valor * FACTOR_40450;
}
