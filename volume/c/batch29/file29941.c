// fichero 29941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29941;

Registro29941 crear_registro29941(int id) {
    Registro29941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29941(Registro29941 r) {
    return r.valor + r.id;
}
