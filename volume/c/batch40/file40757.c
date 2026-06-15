// fichero 40757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40757;

Registro40757 crear_registro40757(int id) {
    Registro40757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
