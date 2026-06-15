// fichero 40089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40089;

Registro40089 crear_registro40089(int id) {
    Registro40089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
