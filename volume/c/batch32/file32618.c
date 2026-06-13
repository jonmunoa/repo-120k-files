// fichero 32618 -- macros y constantes
#define LIMITE_32618 32718
#define FACTOR_32618 4

int aplicar_limite32618(int valor) {
    if (valor > LIMITE_32618) return LIMITE_32618;
    return valor * FACTOR_32618;
}
