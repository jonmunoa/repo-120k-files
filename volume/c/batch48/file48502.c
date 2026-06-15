// fichero 48502 -- macros y constantes -- MODIFICADO
#define LIMITE_48502 48702
#define FACTOR_48502 4

int aplicar_limite48502(int valor) {
    if (valor > LIMITE_48502) return LIMITE_48502;
    return valor * FACTOR_48502;
}
