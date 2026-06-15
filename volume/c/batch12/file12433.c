// fichero 12433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12433;

Registro12433 crear_registro12433(int id) {
    Registro12433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
