// fichero 25777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25777;

Registro25777 crear_registro25777(int id) {
    Registro25777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25777(Registro25777 r) {
    return r.valor + r.id;
}
