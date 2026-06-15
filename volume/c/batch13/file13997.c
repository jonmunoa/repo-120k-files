// fichero 13997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13997;

Registro13997 crear_registro13997(int id) {
    Registro13997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
