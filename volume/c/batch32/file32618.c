// fichero 32618 -- macros y constantes -- MODIFICADO
#define LIMITE_32618 32818
#define FACTOR_32618 5

int aplicar_limite32618(int valor) {
    if (valor > LIMITE_32618) return LIMITE_32618;
    return valor * FACTOR_32618;
}
