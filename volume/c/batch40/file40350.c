// fichero 40350 -- macros y constantes
#define LIMITE_40350 40450
#define FACTOR_40350 1

int aplicar_limite40350(int valor) {
    if (valor > LIMITE_40350) return LIMITE_40350;
    return valor * FACTOR_40350;
}
