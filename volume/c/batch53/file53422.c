// fichero 53422 -- macros y constantes
#define LIMITE_53422 53522
#define FACTOR_53422 3

int aplicar_limite53422(int valor) {
    if (valor > LIMITE_53422) return LIMITE_53422;
    return valor * FACTOR_53422;
}
