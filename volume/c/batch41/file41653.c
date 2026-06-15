// fichero 41653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41653;

Registro41653 crear_registro41653(int id) {
    Registro41653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
