// fichero 40250 -- macros y constantes -- MODIFICADO
#define LIMITE_40250 40450
#define FACTOR_40250 2

int aplicar_limite40250(int valor) {
    if (valor > LIMITE_40250) return LIMITE_40250;
    return valor * FACTOR_40250;
}
