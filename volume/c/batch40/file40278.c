// fichero 40278 -- macros y constantes -- MODIFICADO
#define LIMITE_40278 40478
#define FACTOR_40278 5

int aplicar_limite40278(int valor) {
    if (valor > LIMITE_40278) return LIMITE_40278;
    return valor * FACTOR_40278;
}
