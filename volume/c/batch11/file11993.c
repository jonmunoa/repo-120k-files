// fichero 11993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11993;

Registro11993 crear_registro11993(int id) {
    Registro11993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11993(Registro11993 r) {
    return r.valor + r.id;
}
