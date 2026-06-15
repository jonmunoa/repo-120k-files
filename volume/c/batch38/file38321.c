// fichero 38321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38321;

Registro38321 crear_registro38321(int id) {
    Registro38321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
