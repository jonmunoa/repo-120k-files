// fichero 40450 -- macros y constantes -- MODIFICADO
#define LIMITE_40450 40650
#define FACTOR_40450 2

int aplicar_limite40450(int valor) {
    if (valor > LIMITE_40450) return LIMITE_40450;
    return valor * FACTOR_40450;
}
