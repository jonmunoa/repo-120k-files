// fichero 33154 -- macros y constantes -- MODIFICADO
#define LIMITE_33154 33354
#define FACTOR_33154 6

int aplicar_limite33154(int valor) {
    if (valor > LIMITE_33154) return LIMITE_33154;
    return valor * FACTOR_33154;
}
