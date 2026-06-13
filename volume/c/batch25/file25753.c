// fichero 25753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25753;

Registro25753 crear_registro25753(int id) {
    Registro25753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25753(Registro25753 r) {
    return r.valor + r.id;
}
