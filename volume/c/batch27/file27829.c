// fichero 27829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27829;

Registro27829 crear_registro27829(int id) {
    Registro27829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
