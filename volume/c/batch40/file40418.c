// fichero 40418 -- macros y constantes -- MODIFICADO
#define LIMITE_40418 40618
#define FACTOR_40418 5

int aplicar_limite40418(int valor) {
    if (valor > LIMITE_40418) return LIMITE_40418;
    return valor * FACTOR_40418;
}
