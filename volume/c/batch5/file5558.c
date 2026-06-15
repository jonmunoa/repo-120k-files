// fichero 5558 -- macros y constantes -- MODIFICADO
#define LIMITE_5558 5758
#define FACTOR_5558 5

int aplicar_limite5558(int valor) {
    if (valor > LIMITE_5558) return LIMITE_5558;
    return valor * FACTOR_5558;
}
