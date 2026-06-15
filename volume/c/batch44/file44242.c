// fichero 44242 -- macros y constantes -- MODIFICADO
#define LIMITE_44242 44442
#define FACTOR_44242 4

int aplicar_limite44242(int valor) {
    if (valor > LIMITE_44242) return LIMITE_44242;
    return valor * FACTOR_44242;
}
