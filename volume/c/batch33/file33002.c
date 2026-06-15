// fichero 33002 -- macros y constantes -- MODIFICADO
#define LIMITE_33002 33202
#define FACTOR_33002 4

int aplicar_limite33002(int valor) {
    if (valor > LIMITE_33002) return LIMITE_33002;
    return valor * FACTOR_33002;
}
