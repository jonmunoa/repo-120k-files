// fichero 48738 -- macros y constantes -- MODIFICADO
#define LIMITE_48738 48938
#define FACTOR_48738 5

int aplicar_limite48738(int valor) {
    if (valor > LIMITE_48738) return LIMITE_48738;
    return valor * FACTOR_48738;
}
