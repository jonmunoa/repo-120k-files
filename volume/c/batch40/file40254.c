// fichero 40254 -- macros y constantes -- MODIFICADO
#define LIMITE_40254 40454
#define FACTOR_40254 6

int aplicar_limite40254(int valor) {
    if (valor > LIMITE_40254) return LIMITE_40254;
    return valor * FACTOR_40254;
}
