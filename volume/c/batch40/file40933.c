// fichero 40933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40933;

Registro40933 crear_registro40933(int id) {
    Registro40933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
