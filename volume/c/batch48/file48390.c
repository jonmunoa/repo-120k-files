// fichero 48390 -- macros y constantes
#define LIMITE_48390 48490
#define FACTOR_48390 1

int aplicar_limite48390(int valor) {
    if (valor > LIMITE_48390) return LIMITE_48390;
    return valor * FACTOR_48390;
}
