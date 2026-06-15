// fichero 13446 -- macros y constantes -- MODIFICADO
#define LIMITE_13446 13646
#define FACTOR_13446 3

int aplicar_limite13446(int valor) {
    if (valor > LIMITE_13446) return LIMITE_13446;
    return valor * FACTOR_13446;
}
