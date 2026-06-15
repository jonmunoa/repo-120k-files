// fichero 27618 -- macros y constantes -- MODIFICADO
#define LIMITE_27618 27818
#define FACTOR_27618 5

int aplicar_limite27618(int valor) {
    if (valor > LIMITE_27618) return LIMITE_27618;
    return valor * FACTOR_27618;
}
