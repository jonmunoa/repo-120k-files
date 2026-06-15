// fichero 48778 -- macros y constantes -- MODIFICADO
#define LIMITE_48778 48978
#define FACTOR_48778 5

int aplicar_limite48778(int valor) {
    if (valor > LIMITE_48778) return LIMITE_48778;
    return valor * FACTOR_48778;
}
