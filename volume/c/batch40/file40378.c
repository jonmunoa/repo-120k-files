// fichero 40378 -- macros y constantes -- MODIFICADO
#define LIMITE_40378 40578
#define FACTOR_40378 5

int aplicar_limite40378(int valor) {
    if (valor > LIMITE_40378) return LIMITE_40378;
    return valor * FACTOR_40378;
}
