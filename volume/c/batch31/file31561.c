// fichero 31561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31561;

Registro31561 crear_registro31561(int id) {
    Registro31561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
