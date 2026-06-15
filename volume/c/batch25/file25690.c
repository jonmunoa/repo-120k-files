// fichero 25690 -- macros y constantes -- MODIFICADO
#define LIMITE_25690 25890
#define FACTOR_25690 2

int aplicar_limite25690(int valor) {
    if (valor > LIMITE_25690) return LIMITE_25690;
    return valor * FACTOR_25690;
}
