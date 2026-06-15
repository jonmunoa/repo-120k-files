// fichero 41861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41861;

Registro41861 crear_registro41861(int id) {
    Registro41861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
