// fichero 32418 -- macros y constantes -- MODIFICADO
#define LIMITE_32418 32618
#define FACTOR_32418 5

int aplicar_limite32418(int valor) {
    if (valor > LIMITE_32418) return LIMITE_32418;
    return valor * FACTOR_32418;
}
