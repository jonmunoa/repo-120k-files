// fichero 37730 -- macros y constantes
#define LIMITE_37730 37830
#define FACTOR_37730 1

int aplicar_limite37730(int valor) {
    if (valor > LIMITE_37730) return LIMITE_37730;
    return valor * FACTOR_37730;
}
