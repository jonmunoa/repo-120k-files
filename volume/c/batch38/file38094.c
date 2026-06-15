// fichero 38094 -- macros y constantes -- MODIFICADO
#define LIMITE_38094 38294
#define FACTOR_38094 6

int aplicar_limite38094(int valor) {
    if (valor > LIMITE_38094) return LIMITE_38094;
    return valor * FACTOR_38094;
}
