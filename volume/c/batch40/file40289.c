// fichero 40289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40289;

Registro40289 crear_registro40289(int id) {
    Registro40289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
