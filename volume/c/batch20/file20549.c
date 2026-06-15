// fichero 20549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20549;

Registro20549 crear_registro20549(int id) {
    Registro20549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
