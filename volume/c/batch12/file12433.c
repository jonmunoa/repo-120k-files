// fichero 12433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12433;

Registro12433 crear_registro12433(int id) {
    Registro12433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12433(Registro12433 r) {
    return r.valor + r.id;
}
