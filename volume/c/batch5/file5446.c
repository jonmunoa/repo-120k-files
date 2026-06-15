// fichero 5446 -- macros y constantes -- MODIFICADO
#define LIMITE_5446 5646
#define FACTOR_5446 3

int aplicar_limite5446(int valor) {
    if (valor > LIMITE_5446) return LIMITE_5446;
    return valor * FACTOR_5446;
}
