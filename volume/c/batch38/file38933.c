// fichero 38933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38933;

Registro38933 crear_registro38933(int id) {
    Registro38933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
