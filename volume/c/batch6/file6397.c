// fichero 6397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6397;

Registro6397 crear_registro6397(int id) {
    Registro6397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
