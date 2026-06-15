// fichero 19154 -- macros y constantes -- MODIFICADO
#define LIMITE_19154 19354
#define FACTOR_19154 6

int aplicar_limite19154(int valor) {
    if (valor > LIMITE_19154) return LIMITE_19154;
    return valor * FACTOR_19154;
}
