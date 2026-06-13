// fichero 11917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11917;

Registro11917 crear_registro11917(int id) {
    Registro11917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11917(Registro11917 r) {
    return r.valor + r.id;
}
