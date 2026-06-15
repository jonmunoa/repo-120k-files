// fichero 49730 -- macros y constantes -- MODIFICADO
#define LIMITE_49730 49930
#define FACTOR_49730 2

int aplicar_limite49730(int valor) {
    if (valor > LIMITE_49730) return LIMITE_49730;
    return valor * FACTOR_49730;
}
