// fichero 20477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20477;

Registro20477 crear_registro20477(int id) {
    Registro20477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
