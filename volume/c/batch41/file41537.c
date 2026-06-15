// fichero 41537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41537;

Registro41537 crear_registro41537(int id) {
    Registro41537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
