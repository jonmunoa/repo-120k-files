// fichero 40546 -- macros y constantes -- MODIFICADO
#define LIMITE_40546 40746
#define FACTOR_40546 3

int aplicar_limite40546(int valor) {
    if (valor > LIMITE_40546) return LIMITE_40546;
    return valor * FACTOR_40546;
}
