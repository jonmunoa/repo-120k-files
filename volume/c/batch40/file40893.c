// fichero 40893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40893;

Registro40893 crear_registro40893(int id) {
    Registro40893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
