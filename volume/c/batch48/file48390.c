// fichero 48390 -- macros y constantes -- MODIFICADO
#define LIMITE_48390 48590
#define FACTOR_48390 2

int aplicar_limite48390(int valor) {
    if (valor > LIMITE_48390) return LIMITE_48390;
    return valor * FACTOR_48390;
}
