// fichero 40386 -- macros y constantes -- MODIFICADO
#define LIMITE_40386 40586
#define FACTOR_40386 3

int aplicar_limite40386(int valor) {
    if (valor > LIMITE_40386) return LIMITE_40386;
    return valor * FACTOR_40386;
}
