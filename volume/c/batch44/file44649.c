// fichero 44649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44649;

Registro44649 crear_registro44649(int id) {
    Registro44649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
