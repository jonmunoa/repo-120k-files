// fichero 40074 -- macros y constantes -- MODIFICADO
#define LIMITE_40074 40274
#define FACTOR_40074 6

int aplicar_limite40074(int valor) {
    if (valor > LIMITE_40074) return LIMITE_40074;
    return valor * FACTOR_40074;
}
