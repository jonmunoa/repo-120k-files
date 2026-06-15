// fichero 14721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14721;

Registro14721 crear_registro14721(int id) {
    Registro14721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
