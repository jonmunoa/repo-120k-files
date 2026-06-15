// fichero 49346 -- macros y constantes -- MODIFICADO
#define LIMITE_49346 49546
#define FACTOR_49346 3

int aplicar_limite49346(int valor) {
    if (valor > LIMITE_49346) return LIMITE_49346;
    return valor * FACTOR_49346;
}
