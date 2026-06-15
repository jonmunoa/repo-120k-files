// fichero 36285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36285;

Registro36285 crear_registro36285(int id) {
    Registro36285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
