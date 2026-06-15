// fichero 27281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27281;

Registro27281 crear_registro27281(int id) {
    Registro27281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
