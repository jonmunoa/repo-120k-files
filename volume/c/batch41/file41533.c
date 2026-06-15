// fichero 41533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41533;

Registro41533 crear_registro41533(int id) {
    Registro41533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
