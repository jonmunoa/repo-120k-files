// fichero 29690 -- macros y constantes -- MODIFICADO
#define LIMITE_29690 29890
#define FACTOR_29690 2

int aplicar_limite29690(int valor) {
    if (valor > LIMITE_29690) return LIMITE_29690;
    return valor * FACTOR_29690;
}
