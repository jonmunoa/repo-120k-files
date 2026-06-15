// fichero 40097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40097;

Registro40097 crear_registro40097(int id) {
    Registro40097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
